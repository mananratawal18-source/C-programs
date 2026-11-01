#include <stdio.h>
int main()
{
    int arr[] = {2, 31, 7, 69, 67, 12, 81, 95, 41};
    int max = -1;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The maximum number in the array is %d\n", max);
    return 0;
}