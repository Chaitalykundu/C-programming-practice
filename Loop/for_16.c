#include<stdio.h>
int main()
{
    int n,i,d,l=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        d=i%10;
        if(d>l)
            l=d;
    }
    printf("digit is %d",l);
}
