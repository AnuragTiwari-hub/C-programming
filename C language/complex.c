/* 1.	Write a C program that uses functions to perform the following operations:
        a.	Reading a complex number.
        b.	Writing a complex number.
        c.	Addition and subtraction of two complex numbers
Note: represent complex number using a structure.
*/
#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex readComplex()
{
    struct Complex c;
    printf("enter the real and imagenary no: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void writeComplex(struct Complex c)
{
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

struct Complex addComplex(struct Complex a, struct Complex b)
{
    struct Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

struct Complex subComplex(struct Complex a, struct Complex b)
{
    struct Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main()
{
    struct Complex c1, c2, sum, diff;
    c1 = readComplex();
    c2 = readComplex();
    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);
    writeComplex(sum);
    writeComplex(diff);
    return 0;
}