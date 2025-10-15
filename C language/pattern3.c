/*
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
    */

#include <stdio.h>

int main()
{
    int rows, i, j, space;
    int coefficient = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {

        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }

        coefficient = 1;

        for (j = 0; j <= i; j++)
        {

            if (j == 0)
            {
                coefficient = 1;
            }
            else
            {

                coefficient = coefficient * (i - j + 1) / j;
            }

            printf("%4d", coefficient);
        }

        printf("\n");
    }

    return 0;
}
