#include <stdio.h>

/* Return 1 if the year is a leap year, otherwise return 0. */
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main(void) {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("Please enter a year greater than zero.\n");
    } else if (isLeapYear(year)) {
        printf("%d IS a leap year.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
