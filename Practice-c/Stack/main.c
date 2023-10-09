#include <stdio.h>

int main(void)
{
	int choice, data;
	while(1)
	{
		printf("\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print the top element\n");
		printf("4. Print all the elements of the stack\n");
		printf("5. quite\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed: ");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				printf("Deleted element is %d\n", data);
				break;
			}
	}
	return 0;
}