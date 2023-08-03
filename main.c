#include <stdio.h>
#include "stack.h"
int main()
{
	printf("\nhello.");
	int n;
	Stack mystack;
	init(&mystack);
	do
	{
		printf("\nMenu:\n0: Exit \n1: Quicksort sort \n2: Merge sort \n3: Stack");
		printf("\nEnter value of n:");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			printf("\nQuicksort sort\n");
			break;
		case 2:
			printf("\nMerge sort\n");
			break;
		case 3:
			printf("\nStack\n");
			//push
			push(&mystack, 10);
			push(&mystack, 29);
			push(&mystack, 22);

			// pop
			while (!is_empty(&mystack))
			{
				int item = pop(&mystack);
				printf("%d\n", item);
			}
			break;
		case 0:
		default:
			printf("\nNo sorting for you\n");
			break;
		}

	} while (n != 0);

	return 0;
}
