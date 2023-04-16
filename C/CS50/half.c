#include <stdio.h>



int main() {
  float bill, tax_percent, tip_percent, total, half;

  printf("Enter the amount of bill: ");
  scanf("%f", &bill);

  printf("Enter the tax percent: ");
  scanf("%f", &tax_percent);
  tax_percent /= 100; // convert to decimal

  printf("Enter the tip percent: ");
  scanf("%f", &tip_percent);
  tip_percent /= 100; // convert to decimal

  total = bill + ((bill * tax_percent));
  half = ((total + (total * tip_percent)) /2);
  printf("%.2f", half);

  return 0;
}
