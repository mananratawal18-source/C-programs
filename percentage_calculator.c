# include <stdio.h>

float cal_percentage(float e, float p, float c, float m, float a);

int main()
{
    printf("Hello user....\n");
    float e,p,c,m,a;
    printf("Please enter your English marks out of 100 : ");
    scanf("%f", & e);
    printf("Please enter your Physics marks out of 100 : ");
    scanf("%f", & p);
    printf("Please enter your Chemistry marks out of 100 : ");
    scanf("%f", & c);
    printf("Please enter your Maths marks out of 100 : ");
    scanf("%f", & m);
    printf("Please enter your Additional subject marks out of 100 : ");
    scanf("%f", & a);
    printf("Your final percentage is %f\n", cal_percentage(e,p,c,m,a) );
    return 0;
}

float cal_percentage(float e, float p, float c, float m, float a)
{
    return ((e+p+c+m+a)/500.0)*100.0;
}