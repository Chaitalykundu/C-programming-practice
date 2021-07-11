#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter the no.: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(n==1){
        printf("neither prime nor composite");
    }
    else{
        if(c==0){
            printf("prime");
        }
    else{
            printf("not prime");
    }
    }
    return 0;
}
