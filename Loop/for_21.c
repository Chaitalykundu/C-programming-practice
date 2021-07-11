/*1 2 3 4
  2 3 4
  3 4
  4*/

#include<stdio.h>
int main()
{
    int i,n=1;
    for(i=n;i<=4;i++)
    {
        printf("%d",i);
        if(i==4)
        {
            printf("\n");
            n=n+1;
            i=n-1;

        }

    }
}
