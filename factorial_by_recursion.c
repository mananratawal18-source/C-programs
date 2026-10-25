# include <stdio.h>

int factorial(int num); // function declaration



int main()
{
    printf("Hello user please enter the number of which you want factorial of : ");
    int num;
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num)); // function call
    return 0;
}



int factorial(int num) // function definition
{
    if ( num==1 || num==0 )
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1); // function calling inside itself(recursion)
    }
}