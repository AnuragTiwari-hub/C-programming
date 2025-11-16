/*Write a C program to get a positive integer number from the user and 
print the result of number / 16 using bit-wise right shift operator.(self practise). */

#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    int result = n >> 4;  // Bitwise right shift by 4 is equivalent to dividing by 16 for positive integers
    printf("Result of %d / 16 using bitwise right shift: %d\n", n, result);
    return 0;
}