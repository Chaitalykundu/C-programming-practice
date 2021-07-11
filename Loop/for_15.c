#include<stdio.h>
int main()
{
    int n,i,d,p=1,nm=0;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=n;i>0;i/=10)
    {
        d=i%10;
        nm=nm+(d*p);
        p=p*10;
    }
    printf("no. is %d",nm);
}
