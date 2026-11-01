#include <stdio.h>
int main()
{
    int arr[5] = {2, 34, 56, 6, 7};
    int sum_odd = 0;
    int sum_even = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + arr[i];
        }
        else
        {
            sum_odd = sum_odd + arr[i];
        }
    }
    printf("The sum of odd index of the array is : %d\n", sum_odd);
    printf("The sum of even index of the array is : %d\n", sum_even);
    if (sum_even > sum_odd)
    {
        printf("The difference of both is %d\n", sum_even - sum_odd);
    }
    else if (sum_odd > sum_even)
    {
        printf("The difference of both is %d\n", sum_odd - sum_even);
    }
    else
    {
        printf("The difference in both is zero...\n");
    }
    return 0;
}