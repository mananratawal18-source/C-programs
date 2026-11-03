#include <stdio.h>
int gcd_non_recursive(int a, int b);
int gcd_recursive(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive integers only.\n");
    }
    else
    {
        printf("GCD (Non-Recursive) of %d and %d = %d\n", num1, num2, gcd_non_recursive(num1, num2));
        printf("GCD (Recursive) of %d and %d     = %d\n", num1, num2, gcd_recursive(num1, num2));
    }
    return 0;
}

int gcd_non_recursive(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_recursive(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd_recursive(b, a % b);
}


