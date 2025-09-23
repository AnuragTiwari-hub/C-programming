#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter length: \n");
    scanf("%d", &a);
    printf("enter breadth: \n");
    scanf("%d", &b);
    c = a * b;
    printf("the area is %d\n", c);
    return 0;
}