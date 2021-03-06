// lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Auto
{
	char * name;
	int year;
	int totalKm;
};

void Print(Auto cars)
{
	puts(cars.name);
	printf("%d", cars.year);
	printf("%d", cars.totalKm);
}

int main()
{
	Auto cars[4];

	cars[0] = { "BMW", 1999, 20000 };
	cars[1] = { "Mersedes", 2015, 25000 };
	cars[2] = { "Wolwo", 1988, 40000 };
	cars[3] = { "Pejo", 2001, 31000 };

	int New = cars[0].year;
	int old = cars[0].year;

	for (int i = 0; i < 4; i++) 
	{
		if (cars[i].year > New)
		{
			printf("New car: \n");
			New= cars[i].year;
			printf("%d\n", New);
		}
		if (cars[i].year < old)
		{
			printf("Old car: \n");
			old = cars[i].year;
			printf("%d", old);
		}
	}

	_gettch();
    return 0;
}

