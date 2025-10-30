// Write a program to convert decimal to binary using function.
#include <stdio.h>

void decimalToBinary(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main()
{
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Binary representation for negative numbers is not handled in this program.");
        return 1;
    }

    printf("Binary: ");
    decimalToBinary(num);
    printf("\n");

    return 0;
}