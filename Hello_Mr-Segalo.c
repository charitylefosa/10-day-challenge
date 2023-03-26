#include<stdio.h>
#include<string.h>
/**
* main - Writes a program that inputs a name, surname and gender.
* Thereafter greet the user formally and state the full names of the user.
* Return: 0
*/


int main(void)
{
	char f[10] = "female";
	char m[10] = "male";
	char o[10] = "other";
	char name[10];
	char surname[10];
	char fA[6] = "Mrs";
	char mA[6] = "Mr";
	char p[10];

	printf("Name and Surname: ");
	scanf("%s %s", name, surname);

	printf("Are you male, female or other: ");
	scanf("%10s", p);
	if (strcmp(p, f) == 0)
	{
		printf("Hello %s %s\n", fA, surname);
	}
	else if (strcmp(p, m) == 0)
	{
		printf("Hello %s %s\n", mA, surname);
	}
	else if (strcmp(p, o) == 0)
	{
		printf("Please specify other: \n");
		scanf("%s", o);
		printf("Hello %s %s\n", name, surname);
	}
	else
	{
		printf("invalid input");
	}
	return (0);
}

