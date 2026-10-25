# include <stdio.h>

int sum(int num); // function declaration 

int main()
{
    printf("Please enter till when you want the sum of natural numbers : ");
    int num,s;
    scanf("%d", &num);
    s= sum(num); // function calling
    printf("The sum of first %d natural numbers is %d\n", num, s);
    return 0;
}


int sum(int num) // function definition 
{
    if( num==1)
    {
        return 1;
    }
    else
    {
        return num + sum(num-1); // function calling inside itself(recursion)
    }
    
}