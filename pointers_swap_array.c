#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int x;
    int y;
    int arr[5];
    int *ptr;
    int i;

    printf("Enter two numbers to swap (x and y): ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);

    printf("\nEnter 5 integers for the array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("\nAccessing array elements using pointer arithmetic:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element at index %d = %d (Address: %p)\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
