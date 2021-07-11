/*1 2 3 4
  1 2 3
  1 2
  1 */


#include<stdio.h>
int main()
{
    int i,k=4;
    for(i=1;i<=k;i++)
    {
        printf("%d",i);
        if(i==k)
        {
            printf("\n");
            k--;
            i=0;

        }
    }

}
