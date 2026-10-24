# include <stdio.h>

float c_to_f(float c);

int main()
{
    printf("Please enter the temp in celsius : ");
    float c;
    scanf("%f", &c);
    printf("The fahrenheit reading is : %f\n", c_to_f(c));
    return 0;
}

float c_to_f(float c)
{
    return ((c*9.0/5.0)+32.0);
}