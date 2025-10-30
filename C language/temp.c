// Write a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
#include <stdio.h>

int main()

{

    float celsius, fahrenheit;

    printf("temperature in celsius");

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%f", fahrenheit);

    return 0;
}