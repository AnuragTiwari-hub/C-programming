//write the program to print the storage size for int, char,float,double data type.
#include <stdio.h>

#include <limits.h>

int main()

{

    int a;

    char b;

    float c;

    double d;

    printf("Storage size for int data type:%ld\n", sizeof(a));

    printf("Storage size for char data type:%ld\n", sizeof(b));

    printf("Storage size for float data type:%ld\n", sizeof(c));

    printf("Storage size for double data type:%ld\n", sizeof(d));
}