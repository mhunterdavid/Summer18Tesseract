#include <stdio.h>
#include <string.h>

int main()
{
	char * first_name = "John"; //This is how to define a string in C through pointers
	char[] last_name = "Doe";

/* Basic string commands for code:
'strlen' - A command used to return the length of a string which is passed as an argument
'strncmp' - A command used to compare two strings, returning 0 if they equal, or not 0 if they don't equal
'strcmp' - An unsafe version of strncmp
*/
	
	printf("strlen(first_name)\n");	 	
	
