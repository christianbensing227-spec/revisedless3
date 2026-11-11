#include <stdio.h>

void tryToDouble(int num);

int main(void) {
    int num = 7;

    printf("Before calling tryToDouble: num = %d\n", num);
    tryToDouble(num);
    printf("After calling tryToDouble: num = %d\n", num);

    return 0;
}

void tryToDouble(int num) {
    num = num * 2;
    printf("Inside tryToDouble, doubled value = %d\n", num);
}
