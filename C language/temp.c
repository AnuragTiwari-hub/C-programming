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