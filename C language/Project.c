#include <stdio.h>

// Declaring Functions
float c_f(float);
float f_c(float);
float c_k(float);
float k_c(float);
float f_k(float);
float k_f(float);

// Make temp and result gloabal or not
// add degree symbol
/*
float inputTemp, result;
/ 2. We ask for the temperature *before* the switch to save lines of code
    if(num >= 1 && num <= 6) {
        printf("Enter the temperature to convert: ");
        scanf("%f", &inputTemp);
    }
*/

int main()
{
    // Case Selection Menu

    printf("------------Main menu----------- \n");
    printf("CASE (1)=> Celsius to Fahrenheit \n");
    printf("CASE (2)=> Fahrenheit to Celsius \n");
    printf("CASE (3)=> Celsius to Kelvin \n");
    printf("CASE (4)=> Kelvin to Celsius \n");
    printf("CASE (5)=> Fahrenheit to Kelvin \n");
    printf("CASE (6)=> Kelvin to Fahrenheit \n");
    int num;
    printf("Enter the chosen case number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\nWelcome to Celsius to Fahrenheit CONVERTER \n");
        float temp1, result1;
        printf("Please enter the temprature \n");
        scanf("%f", &temp1);
        result1 = c_f(temp1);
        printf("Temperature in Fahrenheit is => %f", result1);
        break;
    case 2:
        printf("\nWelcone to Fahrenheit to Celsius CONVERTER \n");
        float temp2, result2;
        printf("Please enter the temprature \n");
        scanf("%f", &temp2);
        result2 = f_c(temp2);
        printf("Temperature in Celsius is => %f", result2);
        break;
    case 3:
        printf("\nWelcone to Celsius to Kelvin CONVERTER \n");
        float temp3, result3;
        printf("Please enter the temprature \n");
        scanf("%f", &temp3);
        result3 = c_k(temp3);
        printf("Temperature in Kelvin is => %f", result3);
        break;
    case 4:
        printf("\nWelcone to Kelvin to Celsius CONVERTER \n");
        float temp4, result4;
        printf("Please enter the temprature \n");
        scanf("%f", &temp4);
        result4 = k_c(temp4);
        printf("\nTemperature in Celsius is => %f", result4);
        break;
    case 5:
        printf("\nWelcone to Fahrenheit to Kelvin CONVERTER \n");
        float temp5, result5;
        printf("Please enter the temprature \n");
        scanf("%f", &temp5);
        result5 = f_k(temp5);
        printf("Temperature in Kelvin is => %f", result5);
        break;
    case 6:
        printf("\nWelcone to Kelvin to Fahrenheit CONVERTER \n");
        float temp6, result6;
        printf("Please enter the temprature \n");
        scanf("%f", &temp6);
        result6 = k_f(temp6);
        printf("Temperature in Fahrenheit is => %f", result6);
        break;
    default:
        printf("Invalid selection. Please run again.\n");
        break;
    }

    return 0;
}

// --- Function Definitions ---

float c_f(float c)
{
    float f;
    f = (c * (9.0 / 5.0)) + 32;
    return f;
}

float f_c(float f)
{
    float c;
    c = (f - 32) * (5.0 / 9.0);
    return c;
}

float c_k(float c)
{
    float k;
    k = c + 273.15;
    return k;
}

float k_c(float k)
{
    float c;
    c = k - 273.15;
    return c;
}

float f_k(float f)
{

    float c;
    c = (f - 32) * (5.0 / 9.0);
    float k;
    k = c + 273.15;
    return k;
}

float k_f(float k)
{
    float c;
    c = k - 273.15;
    float f;
    f = (c * (9.0 / 5.0)) + 32;
    return f;
}