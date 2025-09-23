// C program to pass a single element of an array to function
#include <stdio.h>
void display(int age)
{
    printf("%d", age);
}
int main()
{
    int ageArray[] = {2, 3, 4};
    display(ageArray[2]);
    return 0;
}