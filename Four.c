#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1; 
        }

        totalMarks += marks[i];
    }

    double average = totalMarks / 5.0;

    char grade;
    if (average >= 90) {
        grade = 'Ex';
    } else if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // Display results
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0; 
}
