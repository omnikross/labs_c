// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char s[500];
	
	scanf("%s", s);

	for(int i = 0; s[i] != '\0'; i++)
	{
		s[0] = (char)towupper(s[0]);
		if (s[i] == '.')
		{
			if ((char)towupper(s[i + 1]))
			{
				s[i + 1] = (char)towupper(s[i + 1]);
			}
		}
	}
	printf("%s\n", s);
	_gettch();
    return 0;
}

