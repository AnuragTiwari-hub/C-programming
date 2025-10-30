/*write a program to find the value of j if j= i++ + ++i + i++ 
 if i=1 and at the end print the value of i , j.*/
#include <stdio.h>

void main()

{

    int i = 1, j;
    j = i++ + ++i + i++;
    printf("i=%d\n j=%d", i, j);
}