#include <stdio.h>

int main()

{

float radius;
float area, circum;
float pi = 3.14159;

printf("Enter a value for the radius: ");
scanf("%f", &radius);

area = pi * radius * radius;
circum = 2 * pi * radius;
printf("radius = %f, area = %f, circum = %f\n", radius, area, circum);

}