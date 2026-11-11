#include <stdio.h>

/* Return 1 for a valid score, otherwise return 0. */
int isValidScore(double score) {
    return score >= 0.0 && score <= 100.0;
}

/* Choose a letter grade for a valid score. */
char getGrade(double score) {
    if (score >= 90.0) {
        return 'A';
    }
    if (score >= 80.0) {
        return 'B';
    }
    if (score >= 70.0) {
        return 'C';
    }
    if (score >= 60.0) {
        return 'D';
    }
    return 'F';
}

int main(void) {
    double score;

    printf("Enter your score: ");
    scanf("%lf", &score);

    if (!isValidScore(score)) {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    } else {
        printf("Your grade is: %c\n", getGrade(score));
    }

    return 0;
}
