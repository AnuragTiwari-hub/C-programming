/*	WAP to read a list of integers and store it in a single dimensional array.
 Write a C program to find the frequency of a particular number in a list of integers.*/

#include <stdio.h>

int main()
{
    int n, i, num, count = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    int a[n];
    printf("Enter numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
            count++;
    }

    printf("Frequency is: %d\n", num, count);
    return 0;
}