#include <stdio.h>

int main()
{
  int a, b, temp;

  printf("Enter value for A: ");
  scanf("%d", &a);
  printf("Enter value for B: ");
  scanf("%d", &b);

  printf("\nBefore swapping:\n");
  printf("A = %d, B = %d\n", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("\nAfter swapping:\n");
  printf("A = %d, B = %d\n", a, b);

  return 0;
}
