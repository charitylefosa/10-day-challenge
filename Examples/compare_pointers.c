#include<stdio.h>

const int MAX = 3;

int main()
{
	int var[] = {10, 100, 200};
	int i;
	int *ptr;

	ptr = var;
	i = 0;

	while ( ptr <= &var[MAX - 1])
	{
		printf("var[%d] address is %p\n", i, ptr);
		printf("var[%d] value is %d\n", i, *ptr);
		ptr++;
		i++;
	}
	return (0);
}
