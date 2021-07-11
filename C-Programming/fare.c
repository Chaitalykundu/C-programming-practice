#include<stdio.h>
int main()
{
    int distance, f;
    printf("\n Enter the distance in km: ");
    scanf("%d", &distance);

    if(distance>0)
    {
        if(distance>=1 && distance<=10)
        {
            f=distance*2;
        }

        else if(distance>=11 && distance<=20)
        {
            f= (10*2)+((distance - 10)*4);
        }

        else if(distance>=21 && distance<=30)
        {
            f=(10*2)+(10*4)+((distance - 20)*6);
        }

        else if (distance> 30)
        {
             f=(10*2)+(10*4)+(10*6)+((distance - 30)*8);
        }

        printf("fare is %d", f);
    }
    else
    {
        printf("Invalid distance");
    }

}
