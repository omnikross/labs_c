// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



long int nextInt(int a)
{
	do
	{
		a++;
	} while ((a % 2) != 0);

	if (a % 2)
	{
		return a;
	}
}

int main()
{
	int num;
	scanf("%i", &num);
	long int result = nextInt(num);
	printf("%i", result);
	return 0;
}
    

