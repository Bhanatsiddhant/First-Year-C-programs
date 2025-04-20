/*PRN: 24030331372901
 Name: Siddhant Chandrakant Bhanat
 Title: Addtion via user input
 Date: 
 */

#include<stdio.h>
int main()
{
	int num1,num2,sum;
	printf("Enter the First number: \t");
	scanf("%d",&num1);
	printf("\nEnter the Second number:\t");
	scanf("%d",&num2);
	sum = num1+num2;
	printf("\nThe sum of %d and %d is %d",num1,num2,sum);
	return 0;
}