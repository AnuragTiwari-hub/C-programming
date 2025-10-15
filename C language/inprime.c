/*	Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise.
 Write a C program that invokes this function to generate prime numbers between the given ranges. */
#include <stdio.h>

int ISPRIME(int num)
{
    int i;
    if (num < 2)
        return 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int start, end, i;
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (i = start; i <= end; i++)
    {
        if (ISPRIME(i))
            printf("%d ", i);
    }
    return 0;
}