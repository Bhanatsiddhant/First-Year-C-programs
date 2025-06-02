#include <stdio.h>
int main()
{
	int marks[5], i, j;
	
		for (i = 0; i < 5; i++)
		{
			printf("Enter element %d:\t", i);
			scanf("%d", &marks[i]);
		}
		printf("\nEntered Array elements are:");
		for (i = 0; i < 5; i++)
	{
		printf("\n%d", marks[i]);
	}
	return 0;
}