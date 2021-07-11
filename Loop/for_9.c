#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
    {
        if(i!=n)
            printf("%d,",i);
        else
            printf("%d.",i);
    }
}
