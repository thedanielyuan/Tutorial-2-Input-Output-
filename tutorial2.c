#include <stdio.h>

int main() 

{
    int first, second, total;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);
    
    total = first + second;

    printf("The total is %d\n", total);

    return 0;
}