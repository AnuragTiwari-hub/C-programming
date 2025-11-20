/* Develop a recursive and non-recursive function FACT(num) to find the factorial of a number,
n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function,
 write a C program to compute the binomial coefficient. Tabulate the results for different values of n
  and r with suitable messages.
*/

#include <stdio.h>

long fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

long binomial(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0)
    {
        printf("Invalid input! r must be <= n and both non-negative.\n");
    }
    else
    {
        printf("Binomial Coefficient C(%d,%d) = %ld\n", n, r, binomial(n, r));
    }

    return 0;
}