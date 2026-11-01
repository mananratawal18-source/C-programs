#include <stdio.h>
int main()
{
    int arr[] = {1, 246, 3, 4, 65, 7, 89, 0, 8, 64};
    printf("The original array was : {");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("}\n");

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else
        {
            arr[i] = arr[i] * 2;
        }
    }
    printf("The new array is : {");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("}\n");
    return 0;
}