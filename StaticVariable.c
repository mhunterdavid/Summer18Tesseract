#include<stdio.h>

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
