//write a program to enter marks and if marks are greaterthan or equal to 60 print pass otherwise fail by using ternary operator.
#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);
    char *grade = (marks >= 60) ? "pass" : "fail";
    printf("grade: %s\n", grade);

    return 0;
}