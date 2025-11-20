/* Develop a recursive function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise.
 Write a C program that invokes this function to generate prime numbers between the given ranges. */

#include <stdio.h>

int ISPRIME(int num, int i)
{
    if (num <= 1)
        return 0;
    if (i == num)
        return 1;
    if (num % i == 0)
        return 0;

    return ISPRIME(num, i + 1);
}

int main()
{
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++)
    {
        if (ISPRIME(num, 2))
        {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}