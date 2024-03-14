#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        fibonacci(num);
    }

    return 0;
}
