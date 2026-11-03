#include <stdio.h>

int linearSearch(int arr[], int n, int key);
int binarySearch(int arr[], int n, int key);

int main()
{
    int arr[100];
    int n;
    int key;
    int posLinear;
    int posBinary;
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    posLinear = linearSearch(arr, n, key);
    if (posLinear != -1)
    {
        printf("Linear Search: Element found at index %d\n", posLinear);
    }
    else
    {
        printf("Linear Search: Element not found\n");
    }

    posBinary = binarySearch(arr, n, key);
    if (posBinary != -1)
    {
        printf("Binary Search: Element found at index %d\n", posBinary);
    }
    else
    {
        printf("Binary Search: Element not found\n");
    }
    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
