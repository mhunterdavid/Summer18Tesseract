#include <stdio.h>

/*
This program is to show how data structures work within C, similar to classes within Java
*/

typedef struct
{
	char * name;
	int age;
} person;

int main()
{
	person john;
	john.name = "John";
	john.age = 27;
	printf("%s is %d years old.\n", john.name, john.age);
}

