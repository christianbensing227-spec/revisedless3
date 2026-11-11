#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main(void) {
    int choice;
    float temperature;

    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Celsius value: ");
            scanf("%f", &temperature);
            printf("%.1f C = %.1f F\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("Enter Fahrenheit value: ");
            scanf("%f", &temperature);
            printf("%.1f F = %.1f C\n", temperature, fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice. Please choose 1 or 2.\n");
            break;
    }

    return 0;
}

float celsiusToFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float fahrenheitToCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}
