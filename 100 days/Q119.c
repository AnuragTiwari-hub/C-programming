/* Q119: Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.
*/
/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter no of element in array: ");
    scanf("%d", &n);
    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("enter the array element: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    long long expected = (long long)(n - 1) * n / 2; // sum of 0..n-1
    printf("%lld\n", sum - expected);

    return 0;
}