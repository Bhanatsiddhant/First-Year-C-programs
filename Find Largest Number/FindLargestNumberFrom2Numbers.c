#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter two numbers (separated by space): ");
  scanf("%d %d", &a, &b);

  if (a > b)
  {
    printf("The largest of %d and %d is: %d\n", a, b, a);
  }
  else
  {
    printf("The largest of %d and %d is: %d\n", a, b, b);
  }

  return 0;
}
