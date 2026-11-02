#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int trip = 0;
    int x = 12;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    trip++;
                }
            }
        }
    }
    printf("The total number of triplets in the array is %d\n", trip);
    return 0;
}