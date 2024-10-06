#include <stdio.h>

int main() {

printf("Enter a year")
scanf("%d", &year)

 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

 printf("%d is a leap year.");
else
  printf("%d is not leap year.");
}
return 0;


}