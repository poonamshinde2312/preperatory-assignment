#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
};

void readStudentInfo(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->studentName);

    printf("Enter roll number: ");
    scanf("%s", student->rollNo);

    printf("Enter total marks: ");
    scanf("%f", &student->totalMarks);
}

void displayStudentInfo(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student->studentName);
    printf("Roll Number: %s\n", student->rollNo);
    printf("Total Marks: %.2f\n", student->totalMarks);
}

int main() {
    struct Student student;

    readStudentInfo(&student);
    displayStudentInfo(&student);

    return 0;
}
