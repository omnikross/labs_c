// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 2, 3, 4, 5, 6 };
	int arrResult[5];

	for (int i = 0; i < 5; i++)
	{
		arrResult[i] = arr1[i] + arr2[i];
		printf("%d ", arrResult[i]);
	}
	_gettch();
		
    return 0;
}

