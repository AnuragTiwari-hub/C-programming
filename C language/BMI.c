/* Write a C program to compute the BMI Index of the person and print the BMI values as per the following ranges.
 You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts). */
/*      	             BMI
Starvation          	<15
Anorexic	            15.1 to 17.5
Underweight             17.6 to 18.5
Ideal	                18.6 to 24.9
Overweight	            25 to 25.9
Obese	                30 to 39.9
Morbidity Obese	        40.0 above
*/

 #include <stdio.h>

int main()
{
    float weight, height, bmi;

    // Input
    printf("Enter weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter height (in meters): ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Output BMI value
    printf("\nYour BMI = %.2f\n", bmi);

    // Classify according to BMI ranges
    if (bmi < 15)
        printf("Category: Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi >= 25 && bmi <= 29.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Obese\n");
    else
        printf("Category: Morbidly Obese\n");

    return 0;
}