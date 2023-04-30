#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
/**
*count_node- counts nodes in the single linked list
*@head: list to be counted
*/
void count_node(struct node *head)
{
	int count;

	count = 0;
	if (head == NULL)
	{
		printf("List is empty\n");
	}
	struct node *ptr = NULL;

	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%d\n", count);
}
/**
*main- print a single linked list
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

	count_node(head);
        printf("%d, %d, %d\n", head->data, current->data, current2->data);
        return (0);
}
