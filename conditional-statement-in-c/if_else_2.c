/* accept 3 digit no and print the largest digit  */

#include<stdio.h>
int main()
{
    int n,fd,md,ld;
    printf("Enter the three digit no: ");
    scanf("%d",&n);
    fd=n/100;
    md=(n%100)/10;
    ld=n%10;

    if(fd>md && fd>ld)
        printf("%d is largest",fd);
    else if(md>fd && md>ld)
        printf("%d is largest",md);
    else
        printf("%d is largest",ld);
}
