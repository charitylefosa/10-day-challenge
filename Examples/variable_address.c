#include<stdio.h>
/**
* maind - addresses of variables
* Return: 0
*/
int main(void)
{
	char c;
	int n;
	int *p;/*this is a pointer*/

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);
	printf("Address of variable 'p': %p\n", &p);
	return (0);
}
