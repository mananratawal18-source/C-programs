#include <stdio.h>

void recursiveBubbleSort(int arr[], int n);

int main()
{
    int arr[100];
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    recursiveBubbleSort(arr, n);

    printf("Array sorted using Recursive Bubble Sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void recursiveBubbleSort(int arr[], int n)
{
    int i;
    int temp;

    if (n == 1)
    {
        return;
    }

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    recursiveBubbleSort(arr, n - 1);
}
