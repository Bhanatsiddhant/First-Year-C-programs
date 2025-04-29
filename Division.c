#include <stdio.h>

int main()
{
  int dividend, divisor;
  float quotient;

  printf("Enter dividend: ");
  scanf("%d", &dividend);
  printf("Enter divisor: ");
  scanf("%d", &divisor);

  if (divisor == 0)
  {
    printf("Error: Division by zero is not allowed.\n");
    return 1;
  }

  quotient = (float)dividend / divisor;

  printf("\nResult of division:\n");
  printf("%d ÷ %d = %.2f\n", dividend, divisor, quotient);

  return 0;
}