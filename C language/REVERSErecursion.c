/* Develop a recursive function REVERSE (str) that accepts a string argument.
 Write a C program that invokes this function to find the reverse of a given string. */

#include <string.h>
void REVERSE(char str[], int start, int end)
{

    if (start >= end)
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    REVERSE(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);

    REVERSE(str, 0, len - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}