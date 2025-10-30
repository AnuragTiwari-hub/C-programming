//wap to calculate the factorial of the input no using functions.
#include <stdio.h>
long facto(int n)
{
long fact = 1;
    for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("factorial of %d = %lu\n", n, fact);
    return fact;
}



int main()
{
    int num;
    long f;
     printf("enter a value");
    scanf("%d", &num);

    long result =  facto(num);
    
}