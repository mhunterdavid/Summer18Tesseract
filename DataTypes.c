#include<stdio.h>

int main()
{
/*
	Way to define booleans within C:

	#define BOOL char
	#define FALSE 0
	#define TRUE 1

*/

	int a = 0, b = 1, c = 2, d = 3, e = 4;
	a = b + c - d * e;
	printf("%d""\n",a);
}
