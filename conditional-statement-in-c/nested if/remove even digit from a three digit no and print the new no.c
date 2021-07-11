/* Take three digit no
Check it is three digit or not
Remove even digit
Print the new no */

#include<stdio.h>
int main()
{
    int n,fd,md,ld,num=0;
    printf("Enter a three digit no: ");
    scanf("%d",&n);
    if(n>=100 && n<=999)
    {
        fd=n/100;
        md=(n%100)/10;
        ld=(n%100)%10;
        if(fd%2!=0)
            num=num*10+fd;
        if(md%2!=0)
            num=num*10+md;
        if(ld%2!=0)
            num=num*10+ld;
        printf("%d",num);
    }

    else
        printf("This is not a three digit no");
}
