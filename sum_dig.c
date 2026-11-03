#include <stdio.h>

int main()
{
    int num, temp, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a positive integer.\n");
    }

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of individual digits of %d = %d\n", num, sum);

    return 0;
}
