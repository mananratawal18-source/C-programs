# include <stdio.h>

int main()
{
    printf("hello user please enter how many integers you want to store in your array : \n");
    int n ;
    scanf("%d", & n);
    int array[n];
    for (int i=0; i<n; i++)
    {
        printf("Please enter %d number element of the array : ", i+1);
        scanf("%d", & array[i]);
        printf("\n");
    }
    printf("The reverse order of the data stored inside the array is :\n");
    for (int i=n; i>0; i--)
    {
        printf("%d\n", array[i-1]);
    }
}