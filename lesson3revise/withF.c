#include <stdio.h>

int factorial(int n);

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("%d! = %d\n", number, factorial(number));
    return 0;
}

int factorial(int n) {
    int result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}
