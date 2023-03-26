#include<stdio.h>
int main(void)
{
	int i;
	int j;
	printf("Multiplication of ");
	scanf("%d", &j);

	for( i = 0; i <= 12; i++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
	return (0);
}
