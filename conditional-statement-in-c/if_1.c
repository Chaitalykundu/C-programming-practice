/* Calculate the total discount of 15% when the purchase is 2000 or more */

#include<stdio.h>
int main()
{
    float p, d=0;
    printf("\n Enter the purchase amount: ");
    scanf("%f",&p);
    if(p>=2000)
    {
        d=p*15/100;  /*formula of total discount */
    }
    printf("\n discount is: %f",d);
}
