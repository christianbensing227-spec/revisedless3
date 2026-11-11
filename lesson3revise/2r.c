#include <stdio.h>

/* Return the base fare for the selected travel class. */
double getBaseFare(char travelClass) {
    if (travelClass == 'E' || travelClass == 'e') {
        return 2500.00;
    }
    if (travelClass == 'B' || travelClass == 'b') {
        return 6500.00;
    }
    return 0.0; /* Zero means the class is not valid. */
}

/* Return the baggage allowance for the selected travel class. */
double getAllowance(char travelClass) {
    if (travelClass == 'E' || travelClass == 'e') {
        return 20.0;
    }
    if (travelClass == 'B' || travelClass == 'b') {
        return 40.0;
    }
    return 0.0;
}

/* Work out the fee for baggage above the allowance. */
double calculateExcessFee(double weight, double allowance) {
    if (weight > allowance) {
        return (weight - allowance) * 150.00;
    }
    return 0.0;
}

int main(void) {
    char travelClass;
    double weight;
    double baseFare;
    double allowance;
    double excessFee;
    double totalFare;

    printf("Enter travel class (E-conomy / B-usiness): ");
    scanf(" %c", &travelClass);
    printf("Enter baggage weight (kg): ");
    scanf("%lf", &weight);

    baseFare = getBaseFare(travelClass);
    if (baseFare == 0.0) {
        printf("Error: Invalid travel class. Booking aborted.\n");
        return 0;
    }
    if (weight < 0.0) {
        printf("Error: Baggage weight cannot be negative.\n");
        return 0;
    }

    allowance = getAllowance(travelClass);
    excessFee = calculateExcessFee(weight, allowance);
    totalFare = baseFare + excessFee;

    printf("\n----- BOARDING SUMMARY -----\n");
    printf("Travel Class: %s\n", (travelClass == 'E' || travelClass == 'e') ? "Economy" : "Business");
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.1f kg (Allowance: %.0f kg)\n", weight, allowance);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", totalFare);
    printf("-----------------------------\n");

    return 0;
}

