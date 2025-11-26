// Develop a recursive function in c language to check wheather the input no is arm strong no or not.
#include <stdio.h>
int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}
int count_digits(int n)
{
    if (n < 10 && n > -10)
        return 1;
    return 1 + count_digits(n / 10);
}
int armstrong_sum(int n, int power_exp)
{
    if (n == 0)
        return 0;
    int digit = n % 10;
    return power(digit, power_exp) + armstrong_sum(n / 10, power_exp);
}
int is_armstrong(int n)
{
    if (n < 0)
        return 0;
    int digits = count_digits(n);
    int sum = armstrong_sum(n, digits);
    return sum == n;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_armstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
