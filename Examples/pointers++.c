#include<stdio.h>

const int MAX = 3;

int main()
{
	int var[] = {10, 100, 200};
	int i;
	int *ptr;

	ptr = var;

	for (i = 0; i < MAX; i++)
	{
		printf("Address of var[%d] = %p\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);
		ptr++;
	}
	return (0);
}
