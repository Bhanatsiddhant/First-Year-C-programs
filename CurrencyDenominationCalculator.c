#include <stdio.h>

int main()
{
  int amount;

  printf("Enter a 3-digit amount: ");
  scanf("%d", &amount);

  if (amount < 100 || amount > 999)
  {
    printf("Please enter a valid 3-digit amount.\n");
    return 1;
  }

  int hundred_notes = amount / 100;
  int remaining = amount % 100;
  int ten_notes = remaining / 10;
  int one_coins = remaining % 10;

  printf("Denominations for %d rupees:\n", amount);
  printf("100-rupee notes: %d\n", hundred_notes);
  printf("10-rupee notes: %d\n", ten_notes);
  printf("1-rupee coins: %d\n", one_coins);

  return 0;
}