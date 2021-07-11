/* input a no. btw 1 and 4 and  display the color red, green, blue, black respectively. if input is not btw 1 and 4 display proper message */

#include<stdio.h>
int main()
{
    int c;
    printf("\nEnter the code: ");
    scanf("%d",&c);
    if(c==1)
        printf("Red");
    else if(c==2)
        printf("Green");
    else if(c==3)
        printf("Blue");
    else if(c==4)
        printf("Black");
    else
        printf("invalid code");
}
