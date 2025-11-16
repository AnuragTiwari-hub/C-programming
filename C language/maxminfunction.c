// Write a program to fin maximum &minimum value in an array using function.
#include <stdio.h>

// Function to find and print the maximum and minimum in an array
void findMinMax(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty.\n");
        return;
    }

    int max_val = arr[0];
    int min_val = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("Maximum element: %d\n", max_val);
    printf("Minimum element: %d\n", min_val);
}

int main() {
    
    int n, i;
    int max, min;
    printf("How many numbers: ");
    scanf("%d", &n);

    int a[n];
    
    printf("Enter %d numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    findMinMax(a, n);

    return 0;
}