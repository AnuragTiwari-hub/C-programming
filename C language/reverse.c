/*	Develop a function REVERSE (str) that accepts a string argument.
Write a C program that invokes this function to find the reverse of a given string. */
#include <stdio.h>
    void REVERSE(char str[])
{
    int i, j;
    char temp;
    for (j = 0; str[j] != '\0'; j++)
        ;
    j--;
    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    REVERSE(str);
    printf("Reversed string: %s\n", str);
    return 0;
}