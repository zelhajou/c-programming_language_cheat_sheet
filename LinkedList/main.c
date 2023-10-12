#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void count_of_nodes(struct node *head)
{
	int count = 0;
	if (head == NULL)
		printf("Linked List is empty");
	struct node *ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%d", count);
}

void print_data(struct node *head)
{
	if (head == NULL)
		printf("LinkedList is empty");
	struct node *temp = NULL;
	temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
}

void add_at_end(struct node **head, int data)
{
	struct node *ptr, *temp;
	ptr = *head;
	temp = (struct node *)malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

// struct node *add_at_end2(struct node *ptr, int data)
// {
// 	struct node *temp = malloc(sizeof(struct node));
// 	temp->data = data;
// 	temp->link = NULL;

// 	ptr->link = temp;
// 	return temp;
// }

// Function to create a new node with the given data
struct node *createNode(int data)
{
	struct node *newNode = (struct Node *)malloc(sizeof(struct node));
	if (newNode == NULL)
	{
		perror("Memory allocation failed");
		exit(1);
	}
	newNode->data = data;
	newNode->link = NULL;
	return newNode;
}

// Function to insert a new node at the end of the list
void insertAtBeginning(struct node **head, int d)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
}

// struct node *insertAtBeginning(struct node *head, int d)
// {
// 	struct node *ptr = malloc(sizeof(struct node));
// 	ptr->data = d;
// 	ptr->link = NULL;

// 	ptr->link = head;
// 	return ptr;
// }

void add_at_pos(struct node **head, int data, int pos)
{
	struct node *ptr = *head;
	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2->data = data;
	ptr2->link = NULL;

	pos--;
	while (pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}

	ptr2->link = ptr->link;
	ptr->link = ptr2;
}

struct node *del_first(struct node *head)
{
	if (head == NULL)
		printf("List is already empty");
	else
	{
		struct node *tmp = head;
		head = head->link;
		free(tmp);
	}
	return head;
}

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	add_at_end(&head, 20);
	add_at_end(&head, 30);
	print_data(head);
	printf("\n");
	add_at_pos(&head, 67, 3);
	struct node *ptr = head;

	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
}

// int main()
// {
// 	struct node *head = NULL;
// 	head = (struct node *)malloc(sizeof(struct node));
// 	head->data = 45;
// 	head->link = NULL;

// 	count_of_nodes(head);

// 	print_data(head);
// }