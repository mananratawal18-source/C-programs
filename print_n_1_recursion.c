# include <stdio.h>

void print_num(int n); // function declaration

int main()
{
    printf("Please enter the number till where you want to print numbers in descending order : ");
    int n;
    scanf("%d", &n);
    print_num(n); // function calling
    return 0;
}

void print_num(int n) // function definition 
{
    if (n==0)
    {
        return;
    }
    else
    {
        printf("%d\n", n);
        print_num(n-1); //function calling inside itself(recursion)
    }
}