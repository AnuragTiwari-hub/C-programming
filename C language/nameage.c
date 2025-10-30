//Write a program that prompts the user to enter their name and age
#include <stdio.h>

int main()
{
    int age;
    char name[50];

    printf("Enter your name:\n");
    scanf(" %s", name);

    printf("Enter your age:\n");
    scanf(" %d", &age);

    printf("Your name is %s, age is %d\n", name, age);

    return 0;
}
