#include <stdio.h>

int main()
{
  int x, y, z;
  printf("\nEnter three numbers (separated by spaces): ");
  scanf("%d %d %d", &x, &y, &z);

  if (x >= y && x >= z)
  {
    printf("The largest of %d, %d and %d is: %d\n", x, y, z, x);
  }
  else if (y >= x && y >= z)
  {
    printf("The largest of %d, %d and %d is: %d\n", x, y, z, y);
  }
  else
  {
    printf("The largest of %d, %d and %d is: %d\n", x, y, z, z);
  }

  return 0;
}