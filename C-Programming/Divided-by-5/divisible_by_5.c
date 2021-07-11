#include<stdio.h>
int main()

{
    int n;
    printf("\nEnter a no: ");
    scanf("%d",&n);
    if(n%5==0)
        printf("the no is divisible by 5");
    else
        printf("the no is not divisible by 5");
}
