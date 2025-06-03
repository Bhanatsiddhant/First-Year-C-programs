#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	 for(i=0;i<3;i++)
      {
		for(j = 0;j < 3;j++)
		{
			printf("Enter Value of [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d",a[i][j]);
		}	  
		printf("\n"); 
		
	}
	 for(i=0;i<3;i++)
      {
		for(j = 0;j < 3;j++)
		{
			printf("Enter Value of [%d][%d]:",i,j);
			scanf("%d",&b[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d",b[i][j]);
		}	  
		printf("\n"); 
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}
	}
	printf("\nThe Resultant  Matrix:");
	for(i=0;i<3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
