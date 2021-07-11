#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a no: ");
    scanf("\n%d",&n);
    if(n>9 && n<100)
        printf("\nThe no is two digit no");
    else
        printf("\nThe no is not two digit no");
}
