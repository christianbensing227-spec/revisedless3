#include <stdio.h>

float calculateBMI(float weightKg, float heightM);
void categorizeBMI(float bmi);

int main(void) {
    float weight;
    float height;
    float bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    printf("Enter height (m): ");
    scanf("%f", &height);

    if (weight <= 0.0f || height <= 0.0f) {
        printf("Error: Weight and height must be greater than zero.\n");
        return 0;
    }

    bmi = calculateBMI(weight, height);
    printf("BMI: %.2f\n", bmi);
    categorizeBMI(bmi);

    return 0;
}

float calculateBMI(float weightKg, float heightM) {
    return weightKg / (heightM * heightM);
}

void categorizeBMI(float bmi) {
    if (bmi < 18.5f) {
        printf("Category: Underweight\n");
    } else if (bmi < 25.0f) {
        printf("Category: Normal\n");
    } else if (bmi < 30.0f) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
}
