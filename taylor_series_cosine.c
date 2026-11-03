#include <stdio.h>

int main()
{
    float x, term = 1.0f, sum = 1.0f;
    int sign = -1;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for (int i = 2; i <= 10; i += 2)
    {
        term = term * (x * x) / (i * (i - 1));
        sum = sum + (sign * term);
        sign = -sign;
    }

    printf("Sum of the series = %f\n", sum);

    return 0;
}
