#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter a date: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date: %d %d %d\n", year, month, day);

    return 0;
}
