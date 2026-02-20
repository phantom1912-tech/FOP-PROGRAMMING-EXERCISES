#include <stdio.h>

int main() {
    int year;

    // Input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic:
    // 1. If year is divisible by 400 → leap year
    // 2. Else if divisible by 100 → not a leap year
    // 3. Else if divisible by 4 → leap year
    // 4. Otherwise → not a leap year
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}