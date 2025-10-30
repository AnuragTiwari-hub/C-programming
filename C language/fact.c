//WAP to calculate the factorial of input number.
#include <stdio.h>
int main()
{
    int i, num;
    long fact = 1;
    printf("enter a value");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("factorial is not defined for negative no\n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("factorial of %d = %lu\n", num, fact);
    }
    return 0;
}