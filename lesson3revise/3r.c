#include <stdio.h>

double add(double first, double second) {
    return first + second;
}

double subtract(double first, double second) {
    return first - second;
}

double multiply(double first, double second) {
    return first * second;
}

double divide(double first, double second) {
    return first / second;
}

int main(void) {
    double num1;
    double num2;
    double result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0.0) {
                printf("Error: Division by zero is undefined!\n");
                return 0;
            }
            result = divide(num1, num2);
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
