#include <stdio.h>

int main() {
  int num, sum = 0, temp;

  printf("Enter a number: ");
  scanf("%d", &num);

while (num>0) {
 temp= num % 10;
 sum += temp;
 num /= 10;

  if (sum > 9) {
  num = sum;
  sum = 0;
    }

    printf("The sum of digits is: %d\n", sum);

    return 0;