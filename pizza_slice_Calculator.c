# include <stdio.h>
# include <math.h>
int main()
{
    int s,f;
    printf("Hello user welcome to this test code of pizza slice calculator for each person\n");
    printf("Please enter the number of slices in your pizza : ");
    scanf("%d", &s);
    printf("Please enter the number of friends including you : ");
    scanf("%d", &f);
    printf("The number of slices each friend will get is %d\n",s/f);
    printf("The number of slices left in the pizza box is : %d\n", s-((s/f)*f));
    printf("Thank you.....\n");
    return 0;
    
}