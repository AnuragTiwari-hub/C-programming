/* Write a program to take an integer array arr as input. The task is to find the maximum
 sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output.
 If all elements are negative, print the largest (least negative) element.
*/
/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("enter no of element in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value in the array: ");
        scanf("%d", &arr[i]);
    }

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }
  
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_ending_here = (arr[i] > max_ending_here + arr[i]) ? arr[i] : max_ending_here + arr[i];
        if (max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
        }
    }

    printf("%d\n", max_so_far);
    return 0;
}
