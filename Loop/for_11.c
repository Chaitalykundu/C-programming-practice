#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=1000;i=i*10)
    {
        if(i==1)
            printf("%d ",i);
        else
            printf("%d ",i+1);

    }
}
