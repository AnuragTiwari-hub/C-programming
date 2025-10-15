/*	WAP to read a list of integers and store it in a single dimensional array.
 Write a C program to print the second largest integer in a list of integers.*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("How many numbers ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0], second = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > second && a[i] < max)
            second = a[i];
    }

    printf("Second largest number is: %d\n", second);
    return 0;
}