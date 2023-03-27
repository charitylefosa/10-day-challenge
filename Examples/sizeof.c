#include<stdio.h>
/**
* main - using sizeof to dynamically determine the size of the data types
* Return: 0
*/
int main(void)
{
	int n;
	int *p;

	printf("size of data type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("size of data type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("size of data type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("size of my variable 'n' on my computer: %lu bytes\n", sizeof(n));
	printf("size of the pointer 'p' on my computer: %lu bytes\n", sizeof(p));
	return (0);
}
