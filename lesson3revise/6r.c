#include <stdio.h>

/* Return the weekday name for numbers 1 through 7. */
const char *getDayName(int dayNum) {
    switch (dayNum) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid day number";
    }
}

int main(void) {
    int dayNum;
    const char *dayName;

    printf("Enter a number (1-7): ");
    scanf("%d", &dayNum);

    dayName = getDayName(dayNum);
    if (dayNum < 1 || dayNum > 7) {
        printf("Error: Number must be between 1 and 7.\n");
    } else {
        printf("Day %d is %s\n", dayNum, dayName);
    }

    return 0;
}
