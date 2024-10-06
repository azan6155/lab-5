#include <stdio.h>

int main() {
    int age, income, creditScore;

    printf("Enter your age");
    scanf("%d", &age);

    printf("Enter your annual income");
    scanf("%d", &income);

    printf("Enter your credit score");
    scanf("%d", &creditScore);

    if ((age >= 30 && age <= 70) && income >= 40000 && creditScore >= 600) {
        printf("You are eligible for a loan.");
    } else 
        printf("You are not eligible for a loan.");
    }

    return 0;
}