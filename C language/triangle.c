#include <stdio.h>

int main()

{
    int a, b, c;

    printf("enter three sides of triangle\n ");
    scanf("%d,%d,%d", &a, &b, &c);

    if ((a + b > c) || (a + c > b) || (b + c > a))

    {
        printf(" it is a valid triangle \n ");
        if (a == b && b == c)

        {
            printf("the triangle is equilateral \n ");
        }

        else

            if (a == b || b == c || a == c)

        {
            printf(" the triangle is isoceles \n ");
        }

        else
        {

            printf("the triangle is scalene \n ");
            {

                if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))

                {
                    printf(" the triangle is right angle triangle");
                }
            }
        }
    }
    else

    {

        printf("the given sides do not form valid triangle");
    }

    return 0;
}