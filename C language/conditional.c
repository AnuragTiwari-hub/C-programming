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