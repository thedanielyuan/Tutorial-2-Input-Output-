#include <stdio.h>

int main() 
{

    char first, second, third;

    printf("Enter first initial: ");
    scanf(" %c", &first);

    printf("Enter second initial: ");
    scanf(" %c", &second);

    printf("Enter third initial: ");
    scanf(" %c", &third);

    printf("Your initials are %c.%c.%c\n", first, second, third);

    return 0;
}
