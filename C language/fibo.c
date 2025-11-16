//WAP to generate fibonacci series upto n terms.
#include <stdio.h>
int main()
{
    int n, i, fir = 0, sec = 1, next;
    printf("enter the no: ");
    scanf("%d", &n);
    printf("fibonacci series ");

    for (i = 0; i < n; i++)
    {
        if (i == 0)
            next = fir;
        else if (i == 1)
            next = sec;
        else
        {
            next = fir + sec;
            fir = sec;
            sec = next;
        }
        printf("%d ",  next);
    }
   
    return 0;
}