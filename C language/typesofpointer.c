/* Declare different types of pointers (int, float, char) and initialize them with the addresses of variables.
 Print the values of both the pointers and the variables they point to.
 */
#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("We have an integer variable with value: %d\n", a);
    printf("Its pointer is holding the address: %p\n", pInt);
    printf("Looking through the pointer, we again see: %d\n\n", *pInt);

    printf("We have a float variable with value: %.2f\n", b);
    printf("Its pointer is holding the address: %p\n", pFloat);
    printf("Looking through the pointer, we again see: %.2f\n\n", *pFloat);

    printf("We have a character variable with value: %c\n", c);
    printf("Its pointer is holding the address: %p\n", pChar);
    printf("Looking through the pointer, we again see: %c\n", *pChar);

    return 0;
}