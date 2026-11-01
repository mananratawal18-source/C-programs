#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int pair = 0;
    printf("please enter the number of which you want to find pairs of from the array : ");
    int x;
    scanf("%d", &x);
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pair++;
            }
        }
    }
    printf("The total pairs are %d\n", pair);
    return 0;
}
