/* accept the marks of maths, computer and English. pass mark in each subject is 30. how many subject a student have passed. */

#include<stdio.h>
int main()
{
    int m,c,e,d=0;
    printf("\nthe marks of maths, computer and english are: ");
    scanf("%d %d %d",&m,&c,&e);

    if(m>=30)
        d=d+1;
    if(c>=30)
        d=d+1;
    if(e>=30)
        d=d+1;
    printf("no of passed sub is %d",d);
}
