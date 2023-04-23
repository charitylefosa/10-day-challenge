#include<stdio.h>

typedef struct User
{
	char *name;
	char *email;
	int age;
}user;

int main(void)
{
	user userr;
	userr.name = "Hei";
	userr.email = "cjhfd@gktmf.c";
	userr.age = 98;
	printf("%s, %s, %d\n",userr.name, userr.email, userr.age);
	return (0);
}
