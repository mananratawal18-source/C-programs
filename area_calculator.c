# include <stdio.h>

// function declaretion  
float area_of_sq(float s);          
float area_of_rec(float l,float b);
float area_of_cir(float r);

int main()
{
    printf("please enter what u want from below....\n");
    printf("For finding the area of square press 1\n");
    printf("For finding the area of rectangle press 2\n");
    printf("For finding area of circle press 3\n");
    int p;
    scanf("%d", &p);
    if (p==1)
    {
        printf("Please enter the side of square in meters : ");
        float s;
        scanf("%f", &s);
        printf("%f\n", area_of_sq(s)); // function call
    }
    else if(p==2)
    {
        float l,b;
        printf("Please enter the lenght of rectangle in meters : ");
        scanf("%f", &l);
        printf("Please enter the breadth of rectangle in meters : ");
        scanf("%f", &b);
        printf("%f\n", area_of_rec(l,b)); // function call
    }
    else if(p==3)
    {
        float r;
        printf("Please enter the radius of circle in meters : ");
        scanf("%f", &r);
        printf("%f\n", area_of_cir(r)); // function call
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}


// function defination 
float area_of_sq(float s)
{
    return s*s;
}


float area_of_rec(float l,float b)
{
    return l*b;
}


float area_of_cir(float r)
{
    return 3.14*r*r;
}