#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int max = atoi(argv[1]); 

    for (int i = 2; i < argc; i++) {
        int currentNum = atoi(argv[i]);
        if (currentNum > max) {
            max = currentNum;
        }
    }

    printf("Maximum: %d\n", max);

    return 0;
}
