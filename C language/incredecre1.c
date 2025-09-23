#include <stdio.h>

void main()

{

    int i = 1, j;
    j = i++ + ++i + i++;
    printf("i=%d\n j=%d", i, j);
}