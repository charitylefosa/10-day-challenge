#include<stdio.h>
#include<string.h>
/**
* main - Writes a program that inputs a name, surname and gender.
* Thereafter greet the user formally and state the full names of the user.
* Return: 0
*/


int main(void)
{
	char name;
	char surname;
	char gender[10];
	gender_t gender[10] =
	{
		{'male', Mr},
		{'female', Mrs},
	};
	
	printf("Name and Surname: ");
	scanf("%s %s", &name, &surname);
	printf("What is your gender: ");
	scanf("%ls", gender);

	switch (gender[10])
	{
		case 'male':
			printf("Hello Mr %s\n", surname);

		case 'female':
			printf("Hello Mrs %s\n", surname);
		default:
			printf("Hello %s, %s\n", name, surname);
	}
	return (0);
}

