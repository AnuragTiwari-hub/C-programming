// write a program to Passing an entire one-dimensional array to a function(array ppt).
#include <stdio.h>
float average(float age2[]);
int main()
{
    float avg1, age1[] = {23.4, 55, 22.6, 3, 40.5, 18};
    avg1 = average(age1);
    printf("Average age=%.2f", avg1);
    return 0;
}
float average(float age2[])
{
    int i;
    float avg2, sum = 0.0;
    for (i = 0; i < 6; ++i)
    {
        sum += age2[i];
    }
    avg2 = (sum / 6);
    return avg2;
}
