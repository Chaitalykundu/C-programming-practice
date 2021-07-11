#include<stdio.h>
int main()
{
    int i,n=0;
    for(i=1; i<=4;i++)
    {
        n=10*n+1;
        {
            if(i!=1111)
                printf("%d,",n);
            else
                printf("%d.",n);
        }
    }
}
