#include<stdio.h>

int main()
{
	//Defining the array
	int numbers[10];

	//Filling up the array
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[3] = 30;
	numbers[4] = 40;
	numbers[5] = 50;
	numbers[6] = 60;
	numbers[7] = 70;

	printf("The 5th number in the array is %d\n",numbers[4]);

	//A grade calculator
	int average;
	int grades[3];

	grades[0] = 90;
	grades[1] = 85;
	grades[2] = 80;
	average = (grades[0]+grades[1]+grades[2])/3;

	printf("The average of the 3 grades is %d\n", average);
}

