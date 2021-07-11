#include<stdio.h>
int main()
{
    int n,i,d,s=9;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        d=i%10;
        if(d<s)
            s=d;
    }
    printf("digit is %d",s);
}
