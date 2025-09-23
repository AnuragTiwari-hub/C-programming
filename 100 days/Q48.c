// Q48: Write a program to print the following pattern:
/*
1
12
123
1234
12345
*/
/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

#include <stdio.h>

int main()
{
    int i, j;
    int n = 5; // number of rows

    for (i = 1; i <= n; i++)
    { // loop for rows
        for (j = 1; j <= i; j++)
        { // loop for columns
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
