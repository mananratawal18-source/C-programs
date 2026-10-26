# include <stdio.h>

int main()
{
    printf("Hello user please enter total number of numbers : ");
    int n;
    scanf("%d", &n);
    float num[n];


    for(int i=0; i<n; i++)   
    {
        printf("Please enter %d number element :",i+1);
        scanf("%f", &num[i]);
    }


    printf("Your numbers are \n");
    for (int i=0; i<n; i++) 
    {
        printf("%.2f\n", num[i]);
    }


    float sum=0.0;
    for (int i=0; i<n; i++) 
    {
        sum = sum + num[i]; 
    }
    printf("The sum of your numbers is : %.2f\n", sum);
    float avg;
    avg = sum/n;
    printf("The average of your numbers is : %.2f\n", avg);
    return 0;
}