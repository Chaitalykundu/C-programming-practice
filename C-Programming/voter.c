#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter age: ");
    scanf("%d",&n);
    if (n>=18)
        printf("\nthe person is voter");
    else
        printf("\nthe person is not voter");
}
