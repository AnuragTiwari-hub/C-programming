//write the program to find the smallest no among three no entered by the user.
#include <stdio.h>

int main()

{

    int a, b, c, small;

    printf("enter 3 no's: ");

    scanf("%d %d %d ", &a, &b, &c);

    small = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("smallest no is: %d\n", small);

    return 0;
}