#include<stdio.h>
//Static variables are used to hold a value in memory throughout the duration of a program, and to not
//delete it after one iteration
int sum (int sum)
{
	static int temp = 0;
	temp += sum;
	return temp;
}

int main()
{
	printf("%d ", sum(55));
	printf("%d ", sum(45));
	printf("%d\n", sum(50));
	return 0;
}
