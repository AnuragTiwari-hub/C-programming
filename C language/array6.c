// write a program to Sorting an Array(array ppt).
#include <stdio.h>
int main()
{
    int size, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[100];
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*  Array sorting code */
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    /*  Prints the sorted array */
    printf("\nElements of array in sorted ascending order: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
