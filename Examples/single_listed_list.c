#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
/**
*main- print a single list
*Return: 0 always
*/
int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->link = NULL;
	head->data = 10;

	struct node *current = malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
	head->link = current;

	struct node *current2 = malloc(sizeof(struct node));
	current2->data = 30;
	current2->link = NULL;
	current->link = current2;

	printf("%d, %d, %d\n", head->data, current->data, current2->data);
	return (0);
}
