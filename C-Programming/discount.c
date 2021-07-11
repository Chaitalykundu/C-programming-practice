#include<stdio.h>
int main()
{
    float d;
    int a;
    printf("\nEnter the amount: ");
    scanf("\n%d",&a);
    if(a>=3000)
    {
        d=a*(15/100);
    }f
    else
    {
        d=a*(10/100);
    }
    printf("The discount is %f",d);
    return(0);
}
