#include <stdio.h>

/* Return 1 when the number is even, otherwise return 0. */
int isEven(int number) {
    return number % 2 == 0;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d is EVEN.\n", number);
    } else {
        printf("%d is ODD.\n", number);
    }

    return 0;
}

