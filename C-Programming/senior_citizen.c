#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter age: ");
    scanf("\n%d",&n);
    if(n>=60)
        printf("\nThe person is senior citizen");
    else
        printf("\nThe person is not senior citizen");
}
