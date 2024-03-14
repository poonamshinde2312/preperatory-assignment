#include <stdio.h>

void decimalToBinary(int number) {
    for (int i = 31; i >= 0; --i) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
}

void decimalToOctal(int number) {
    if (number > 0) {
        decimalToOctal(number / 8);
        printf("%d", number % 8);
    }
}

void decimalToHexadecimal(int number) {
    if (number > 0) {
        decimalToHexadecimal(number / 16);
        int remainder = number % 16;
        if (remainder < 10) {
            printf("%d", remainder);
        } else {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

int main() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Given Number: %d\n", number);

    printf("Binary equivalent: ");
    decimalToBinary(number);
    printf("\n");

    printf("Octal equivalent: ");
    decimalToOctal(number);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    decimalToHexadecimal(number);
    printf("\n");

    return 0;
}
