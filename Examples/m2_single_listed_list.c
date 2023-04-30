#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
/**
*main- print single listed link using method 2
*Return: Always 0
*/
int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 6;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 18;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
	head->link->link = current;

	printf("%d, %d, %d\n", head->data, current->data, current->data);
}
