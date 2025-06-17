#include<stdio.h>
int main()
{
	int num,result;
	printf("Enter the number : \t");
	scanf("%d",&num);
	result = fact(num);
	printf("%d",result);
	return 0;
}
int fact(n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		n = n*fact(n-1);
		return n;
	}
}
