#include <stdio.h>
int main()
{
    int prod = 1;
    printf("Please enter the total number of elements you want to insert in the array : ");
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Please enter %d number element of the array : ", i + 1);
        scanf("%d", &arr[i]);
        prod = prod * arr[i];
    }
    printf("Your array is : {  ");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("}");
    printf("\n");
    printf("The product of the elements of array is : %d\n", prod);
    return 0;
}
