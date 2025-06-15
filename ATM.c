#include<stdio.h>
int main()
{
	int num,i=1;
	for(i=1;i<=3;i++)
	{
		printf("\nEnter the pin:\t");
		scanf("%d",&num);
		if(num==2000)
		{
			printf("Please collect your cash");
			break;
		}
		else if(i==3)
		{
			printf("your card is blocked for 24 hours");
		}
		else
		{
			printf("Incorrect password");
		}
	}
	return 0;
}
