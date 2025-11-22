// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159 // Define constant value of π

int main()
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;     // Formula: πr²
    circumference = 2 * PI * radius; // Formula: 2πr

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}