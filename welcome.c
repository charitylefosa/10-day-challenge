#include<stdio.h>
/**
* main - Entry point
* return: 0
*/

int main(void)
{
	char name[15];
	int age;

	printf("what is your name? ");
	scanf("%s", name);
	printf("Welcome on board %s\n", name);
	printf("How old are you? ");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("You are %d years old\n", age);
		printf("You are eligible to vote\n");
	}
	else
	{
		printf("You are not eligible to vote\n");
	}
	return (0);
}
