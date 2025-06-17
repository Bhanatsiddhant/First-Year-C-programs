#include<stdio.h>
int main ()
{	int num = 10,result;
		result = sum(num);
	printf("%d",result);
	return 0;
}
int sum(n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		n = n+sum(n-1);
		return n;
	}
}
