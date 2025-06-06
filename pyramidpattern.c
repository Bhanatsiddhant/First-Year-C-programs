#include <stdio.h>
int main()
{
	int i, j,n;
	for (i = 1; i <= 5; i++)
	{
		for (n = 1; n <= 5 - i; n++)
		{
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}