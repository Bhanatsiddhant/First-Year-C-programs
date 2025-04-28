/* Name:Siddhant Chandrakant Bhanat
PRN:24030331372901
Date:
  */
#include <stdio.h>
int main() {
  int marks;
  printf("Enter obtained marks:\t");
  scanf("%d", &marks);
  printf("\n Your Grade is:\t");
  if (marks > 100 || marks < 0) {
    printf("The Entered marks are not valid.Please enter valid marks.");
  } else if (marks >= 80) {
    printf("A grade");
  } else if (marks >= 70) {
    printf("B grade");
  } else if (marks >= 60) {
    printf("C grade");
  } else if (marks >= 50) {
    printf("D grade");
  } else if (marks >= 40) {
    printf("E grade");
  } else {
    printf("Failed");
  }
  return 0;
}
