#include<stdio.h>
#include"example.h"

/*double getAverage(int ar[], int size);*/

int main()
{
	int balance[5] = { 1000, 2, 3, 17, 50};
	double ave;

	ave = getAverage( balance, 5);
	printf("Average is %f ", ave);
	return (0);
}
