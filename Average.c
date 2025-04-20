/*PRN: 24030331372901
 Name: Siddhant Chandrakant Bhanat
 Title: Average via user input
 Date: 
 */

#include<stdio.h>
int main()
{
int num1;
float num2,sum,avg;
printf("Enter first number:\t");
scanf("%d",&num1);
printf("\nEnter second number:\t");
scanf("%f",&num2);
sum = num1+num2;
avg = sum/2;
printf("\nThe average of the given number is %f",avg);
return 0;
}
