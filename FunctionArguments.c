#include <stdio.h>

 
//This program is to show how we can give functions control over variables thorugh pointers

typedef struct {
	char * name;
	int age;
} person;

void birthday (person * p)  // Declration of a function, takes a pointer to a person as an argument
{
	(*p).age += 1; // It has to be (*p) or p->age += 1 because it's telling the pointer to change the value of the variable
}

int main()
{
	person john;
	john.name = "John";
	john.age = 27;

	printf("%s is %d years old. \n", john.name, john.age);
	birthday(&john);
	printf("Happy Birthday! %s is now %d years old.\n", john.name, john.age);
}

