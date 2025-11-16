//write a program to count the no of digit of entered no.

#include <stdio.h>
int main()
{
    int num, c = 0;
    printf("enter a no: ");
    scanf("%d", &num);
    if (num == 0)
    {
        c = 1;
    }
    while (num != 0)
    {
        num = num / 10;
        c++;
    }
    printf("no of digit %d\n", c);
    return 0;
}