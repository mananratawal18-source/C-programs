# include <stdio.h>

void print_num(int n);   // function declaration

int main()
{
    printf("Please enter till when you want to print the  natural numbers in ascending order : ");
    int n;
    scanf("%d", &n);
    print_num(n);  
    return 0;  // function calling
}



void print_num(int n)
{
    if( n==0 )
    {
        return;
    }
    else 
    {
        print_num(n-1);
        printf("%d\n", n);
    }
}