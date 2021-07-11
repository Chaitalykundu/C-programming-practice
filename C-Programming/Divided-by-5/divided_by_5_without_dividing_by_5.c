#include<stdio.h>
int main()
{
    int n,d;
    printf("\nEnter a no: ");
    scanf("\n%d",&n);
    d=n%10;
    if(d==0||d==5)
        printf("divisible by 5");
    else
        printf("not divisible by 5");
}
