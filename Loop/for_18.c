#include<stdio.h>
int main()
{
    int n,i,s=9,l=0,d,nm=0,p=1;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        if(d<s)
        {
            s=d;
        }
        if(d>l)
        {
            l=d;
        }
    }
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        if(d==l)
            d=s;
        else if(d==s)
            d=l;

        nm=nm+(d*p);
        p=p*10;
    }
    printf("no. is %d",nm);
}
