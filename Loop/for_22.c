/*1111
  222
  33
  4*/


#include<stdio.h>
int main()
{
    int i,x=1,y=4;
    for(i=y;i>=1;i--)
    {
        printf("%d",x);
        if(i==1)
        {
            printf("\n");
            x++;
            y--;
            i=y+1;

        }

    }
}
