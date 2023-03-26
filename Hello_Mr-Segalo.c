#include<stdio.h>
/**
* arrays and pointers
* main - entry point
*/


int main(void)
{
	char gender[10] = {female, male};
	char name[10];
	char surname[10];
	char i[10];

	printf("Name and Surname: ");
	scanf("%s %s", name, surname);

	printf("Gender: ");
	scanf("%s", gender);
	if (gender = "female")
	{
		i = "Mrs.";
	}
	if (gender = "male")
	{
		i = "Mr.";
	}
	else
	{
		printf("Invalid gender");
	}
	printf("Hello %s %s\n", name, surname);
	return (0);
}

