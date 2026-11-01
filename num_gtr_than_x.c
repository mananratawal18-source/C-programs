#include <stdio.h>
int main()
{
    printf("Please enter the number of elements you want in your array : ");
    int n;
    int arr[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Please enter the %d number element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please enter any number : ");
    int x;
    scanf("%d", &x);

    printf("Your array is : {");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("}\n");

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count = count + 1;
        }
    }
    printf("There are %d numbers greater than %d in your array...\n", count, x);
    return 0;
}