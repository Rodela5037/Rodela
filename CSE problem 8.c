Write a C program to check whether a given year is a leap year or not using if-else and nested if-else statements. The user will input a year, and the program should display whether it is a leap year.
  #include <stdio.h>

int main() {
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is not a leap year\n", year);
            }
        } else {
            printf("%d is a leap year\n", year);
        }
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
