#include<stdio.h>
/**
* main - prints more 10 numbers starting with 100
* Return: Always 0
*/

int main()
{
	int i, j;
	int n[10];

	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}
	for (j = 0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}
	return (0);
}
