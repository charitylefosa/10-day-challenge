#include<stdio.h>
/**
* main - storing a variable address into a pointer
*
* Return: Always(0)
*/

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("the address of 'n': %p\n", &n);
	printf("the adrress of 'p': %p\n", p);
	return (0);
}

