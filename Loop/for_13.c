#include<stdio.h>
#include<math.h>

int main()
{
    int i,c=0,s=0;
    for(i=1;i<=7;i=i+2)
    {
        s=s+i*pow(10,c++);
        if(i!=7)
        {
            printf("%d,",s);
        }
        else
            printf("%d.",s);
    }
}
