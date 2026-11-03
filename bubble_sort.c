#include <stdio.h>
int main()
{
    int n;
    printf("Please enter the number of elements you want inside your array : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Please enter %d number element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("intitial array was : { ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf("}\n");

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("after sorting the array is : { ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf("}\n");

    return 0;
}