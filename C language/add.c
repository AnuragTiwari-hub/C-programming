//Write a C program to add two numbers, take number from user.
#include <stdio.h>
int main()
{
    int n1, n2; 
    int sum = 0;
    printf("enter 1st no: ");
    scanf("%d" , &n1);
    printf("enter 2nd no: ");
    scanf("%d" , &n2);
    sum = n1 + n2;
    printf("the value of variable is %d", sum);
    return 0;
}
