#include <stdio.h>

int fact_non_recursive(int n);
int fact_recursive(int n);

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of negative numbers does not exist.\n");
    }
    else
    {
        printf("Factorial (Non-Recursive) of %d = %d\n", num, fact_non_recursive(num));
        printf("Factorial (Recursive) of %d     = %d\n", num, fact_recursive(num));
    }

    return 0;
}

int fact_non_recursive(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

int fact_recursive(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact_recursive(n - 1);
}



