//WAP to print sum of first n natural no entered by user.
#include <stdio.h>

int main()

{
    int n, sum;

    printf("enter the positive no: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("sun of first %d natural nos is %d\n", n, sum);

    return 0;
}