#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter value for A: ");
  scanf("%d", &a);
  printf("Enter value for B: ");
  scanf("%d", &b);

  printf("\nBefore swapping:\n");
  printf("A = %d, B = %d\n", a, b);

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("\nAfter swapping:\n");
  printf("A = %d, B = %d\n", a, b);

  return 0;
}