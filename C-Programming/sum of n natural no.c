#include<stdio.h>
int sum(int n);
int main()
{
    int n,s=0;
    printf("Enter the no to be added: ");
    scanf("%d",&n);
    s=sum(n);
    printf("sum of n= %d",s);
    return 0;
}

int sum(int n)
{

    if(n<=0)
        return n;
    else
    {
        return(n*(n+1)/2);
    }
}
