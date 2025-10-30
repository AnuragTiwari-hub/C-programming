//Write a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include<stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("enter the length: ");
    scanf("%f", &length);
    printf("enter the width: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area %f", area);
    printf("perimeter %f", perimeter);
}