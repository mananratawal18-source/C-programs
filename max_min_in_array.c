#include <stdio.h>
int main()
{
    int arr[] = {2, -31, 7, -69, 67, -12, 81, -95, 41};
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The maximum number in the array is %d\n", max);
    printf("The minimum number in the array is %d\n", min);
    return 0;
}