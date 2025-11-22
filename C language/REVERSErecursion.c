/* Develop a recursive function REVERSE (str) that accepts a string argument.
 Write a C program that invokes this function to find the reverse of a given string. */

#include <stdio.h>
#include <string.h>

void REVERSE(char str[], int index)
{
    if (index < 0)
        return;

    printf("%c", str[index]);
    REVERSE(str, index - 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    REVERSE(str, strlen(str) - 1);
    printf("\n");

    return 0;
}