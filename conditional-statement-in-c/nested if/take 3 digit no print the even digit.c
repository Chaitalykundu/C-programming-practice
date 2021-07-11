/* Take three digit no
Check it is three digit or not
Print the even digit */


#include<stdio.h>
int main()
{
    int n,fd,md,ld;
    printf("Enter a three digit no: ");
    scanf("%d",&n);
    if(n>=100 && n<=999)
    {
        fd=n/100;
        md=(n%100)/10;
        ld=(n%100)%10;
        if(fd%2==0)
            printf("%d",fd);
        if(md%2==0)
            printf("%d",md);
        if(ld%2==0)
            printf("%d",ld);
    }
    else
        printf("This is not a three digit no");
}
