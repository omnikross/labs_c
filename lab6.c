#include "stdafx.h"
#include <stdlib.h>


typedef struct Class
{
	char name[50];
	int age;
	int mark;
}b;

void printClass(b b) {
	printf("%s ", b.name);
	printf("%d ", b.age);
	printf("%d.\n ", b.mark);
}

Class createClassFromString(char * string)
{
	Class b;
	int i = 0;
	char * t = string;

	while (*t != ';')
	{
		b.name[i] = *t;
		*t++;
		i++;
	}
	b.name[i] = '\0';
	*t++;
	i = 0;
	char age[50];
	while (*t != ';')
	{
		age[i] = *t;
		*t++;
		i++;
	}
	age[i] = '\0';
	b.age = atoi(age);
	*t++;
	i = 0;
	char mark[5];
	while (*t != '\0')
	{
		mark[i] = *t;
		*t++;
		i++;
	}
	mark[i] = '\0';
	b.mark = atoi(mark);
	return b;
}

int main()
{
	FILE *file = fopen("D:\\Class\\Gpa.txt", "rt");
	if (file == NULL)
	{
		printf("can`t open this file");
		return 0;
	}
	char string[100];
	Class *Gpa = (Class*)malloc(sizeof(Class) * 3);
	for (int i = 0; i<3; i++)
	{
		fgets(string, 100, file);
		Class Gpas = createClassFromString(string);
		Gpa[i] = Gpas;
		printClass(Gpa[i]);
	}
	int sum = 0;
	int a = 0;
	for (int j = 0; j < 3; j++)
	{
		sum = sum + Gpa[j].mark;
		if (Gpa[j].mark > a)
			a = Gpa[j].mark;
	}
	sum /= 3;
	printf("sum = %d", sum);
	printf("\nMax = %d", a);
	
	fclose(file);
	free(Gpa);
	_gettch();
	return 0;
}
