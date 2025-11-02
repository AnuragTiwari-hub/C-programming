//Write a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include<stdio.h>
int main()
{
    int length,width,area,perimeter;
    printf("enter the length: ");
    scanf("%d", &length);
    printf("enter the width: ");
    scanf("%d", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area %d" ,area);
    printf("\nperimeter %d", perimeter);
}