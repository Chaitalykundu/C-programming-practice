/* accept 3 digit no and print the largest digit  */

#include<stdio.h>
int main()
{
    int n,d,fd,md,ld;
    printf("Enter the three digit no: ");
    scanf("%d",&n);
    fd=n/100;
    md=(n%100)/10;
    ld=n%10;

    if(fd>md && fd>ld)
        d=fd;
    else if(md>fd && md>ld)
        d=md;
    else
        d=ld;
    printf("%d is largest",d);
}
