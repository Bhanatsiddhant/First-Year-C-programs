#include<stdio.h>
int main()
{
	int i,j,a[3][3];
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
			a[i][j] = a[j][i]
		}	  
	
	}
	return 0;
}
