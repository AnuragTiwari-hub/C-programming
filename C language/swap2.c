//Write a program to swap the values of two no,s without using any other variable.
#include <stdio.h>

int main()

{

    int a = 5, b = 4, temp;

    a = a + b;

    b = a - b;

    a = a - b;

    printf("after swapping: a=%d,b=%d\n", a, b);

    return 0;
}