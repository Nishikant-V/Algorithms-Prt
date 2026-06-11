#include <stdio.h>

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        // Find the minimum element in the unsorted portion
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // Swap the minimum element with the current position
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Display the sorted array
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}