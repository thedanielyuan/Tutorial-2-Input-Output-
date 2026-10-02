#include <stdio.h>

int main() {
    int number, reversed;

    printf("Enter a number between 10 and 99: ");
    scanf("%d", &number);

    reversed = (number % 10) * 10 + (number / 10);

    printf("The reversed number is: %d\n", reversed);

    return 0;
}
