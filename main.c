//AS20250404

#include <stdio.h>

int main() {
    float math, science, english;
    float total, average, highest;
    char grade;

    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);

    printf("Enter marks for Science: ");
    scanf("%f", &science);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    total = math + science + english;
    average = total / 3.0;

    highest = math;
    if (science > highest) {
        highest = science;
    }
    if (english > highest) {
        highest = english;
    }

    if (average >= 80 && average <= 100) {
        grade = 'A';
    } else if (average >= 70 && average < 80) {
        grade = 'B';
    } else if (average >= 60 && average < 70) {
        grade = 'C';
    } else if (average >= 50 && average < 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\n=================================");
    printf("\n         STUDENT REPORT          ");
    printf("\n=================================");
    printf("\nTotal Marks:      %.0f", total);
    printf("\nAverage Marks:    %.2f", average);
    printf("\nHighest Mark:     %.0f", highest);
    printf("\nGrade:            %c", grade);
    printf("\n---------------------------------");

    if (math >= 40 && science >= 40 && english >= 40) {
        printf("\nResult:           PASS");

        if (average >= 85 && math >= 80 && science >= 80 && english >= 80) {
            printf("\nRemarks:          DISTINCTION awarded!");
        }
    } else {
        printf("\nResult:           FAIL");
    }
    printf("\n=================================\n");

    return 0;
}
