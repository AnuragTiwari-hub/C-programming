#include <stdio.h>
void main()
{
    int marks[10], i, n, sum = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student%d: \n", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Sum= %d", sum);
}