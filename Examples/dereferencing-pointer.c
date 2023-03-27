#include<stdio.h>
/**
* main - dereferencing pointer
*
* Return: 0
*/

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("'n' value: %d\n", n);
	printf("'p' value: %p\n", p);
	printf("'n' address: %p\n", &n);

	*p =400;
	printf("'n' value: %d\n", n);
	return (0);
}
