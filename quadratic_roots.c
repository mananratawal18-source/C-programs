#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, root1, root2, realPart, imagPart;

    printf("Enter coefficient 'a' : ");
    scanf("%f", &a);
    printf("Enter coefficient 'b' : ");
    scanf("%f", &b);
    printf("Enter coefficient 'c' : ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Coefficient 'a' cannot be 0 for a quadratic equation.\n");
    }
    else
    {
        D = b * b - 4 * a * c;

        if (D > 0)
        {
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (D == 0)
        {
            root1 = -b / (2 * a);
            printf("Roots are real and equal:\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            realPart = -b / (2 * a);
            imagPart = sqrt(-D) / (2 * a);
            printf("Roots are complex and imaginary:\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
        }
    }

    return 0;
}
