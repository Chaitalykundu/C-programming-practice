/* Accept two nos and check if they are twin no are prime or not.
Eg: 11,13 */

#include<stdio.h>
int main()
{
    int n,i,m,r=0,c=0,e=0;
    printf("Enter two nos.: ");
    scanf("%d %d",&m ,&n);

    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            c++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            e++;
        }
    }
    if(c==2 && e==2 &&(n-m==2 || m-n==2))
    {
        printf("Twin Prime");
    }
    else
    {
        printf("Not Twin Prime");
    }
}
