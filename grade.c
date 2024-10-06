#include <stdio.h>

int main() {
    int no of days present
    float assignmentScore, examScore, weightage;
    char grade;

    printf("Enter no of days present");
    scanf("%d", &no of days present);

    printf("Enter assignment score");
    scanf("%f", &assignmentScore);

    printf("Enter exam score: ");
    scanf("%f", &examScore);

    float weightedAverage = (no of days present * 0.3) + (assignmentScore * 0.4) + (examScore * 0.4);

if (weightage >= 90) {
        grade = 'A';
    } else if (weightage >= 80) {
        grade = 'B';
    } else if (weightage >= 70) {
        grade = 'C';
    } else if (weightage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    printf("Final grade: %c", grade);

    return 0;
}