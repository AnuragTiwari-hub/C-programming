#include <stdio.h>

int main()
{
    int year, days = 0, i;
    char *weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter the year: ");
    scanf("%d", &year);

    
    for (i = 1; i < year; i++)
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366; 
        else
            days += 365; 
    }

   
    printf("1st January of year %d is %s\n", year, weekdays[days % 7]);

    return 0;
}