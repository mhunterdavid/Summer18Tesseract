#include <stdio.h>

/* Pointers are integer values that hold a memory address that point to a value, instead of holding the actual value instead */
int main()
{
	int n = 10;
	int * pointer_to_n = &n;
	*pointer_to_n += 1;

	if(pointer_to_n != &n)
		return 1;
	if(*pointer_to_n != 11)
		return 1;

	printf("Done!\n");
	return 0;
}

