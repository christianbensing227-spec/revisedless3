#include <stdio.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);

int main(void) {
    char travelClass;
    float baggageWeight;
    float baseFare;
    float excessFee;

    printf("Enter travel class (E-conomy / B-usiness): ");
    scanf(" %c", &travelClass);
    printf("Enter baggage weight (kg): ");
    scanf("%f", &baggageWeight);

    if (travelClass != 'E' && travelClass != 'e' &&
        travelClass != 'B' && travelClass != 'b') {
        printf("Error: Invalid travel class entered. Booking aborted.\n");
        return 0;
    }

    if (baggageWeight < 0.0f) {
        printf("Error: Baggage weight cannot be negative.\n");
        return 0;
    }

    baseFare = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, baggageWeight);
    printTicket(travelClass, baggageWeight, baseFare, excessFee);

    return 0;
}

float calculateFare(char travelClass) {
    if (travelClass == 'E' || travelClass == 'e') {
        return 2500.00f;
    }
    return 6500.00f;
}

float checkBaggage(char travelClass, float baggageWeight) {
    float allowance;

    if (travelClass == 'E' || travelClass == 'e') {
        allowance = 20.0f;
    } else {
        allowance = 40.0f;
    }

    if (baggageWeight > allowance) {
        return (baggageWeight - allowance) * 150.00f;
    }
    return 0.0f;
}

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    float allowance;
    float totalFare = baseFare + excessFee;
    const char *className;

    if (travelClass == 'E' || travelClass == 'e') {
        className = "Economy";
        allowance = 20.0f;
    } else {
        className = "Business";
        allowance = 40.0f;
    }

    printf("\n----- BOARDING SUMMARY -----\n");
    printf("Travel Class: %s\n", className);
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.1f kg (Allowance: %.0f kg)\n", baggageWeight, allowance);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", totalFare);
    printf("-----------------------------\n");
}
