/* distance   fare
    1-10:     2 rs/km
    11-20:    4 rs/km
    21-30:    6 rs/km
    >30:      8 rs/km
if distance is 24, then for 1st 1o km it will be 2 rs/km and
    for next 10 km it will be 4 rs/km and
     for the rest 4 km fare will be 6 */


#include<stdio.h>
int main()
{
    int d,f;
    printf("Enter the distance: ");
    scanf("%d",d);
    if(d>0)
    {   if(d>=1 && d<=10)
            f=d*2;
        else if(d>=11 && d<=20)
            f=(10*2)+((d-10)*4);
        else if(d>=21 && d<=30)
            f=(10*2)+(10*4)+((d-20)*6);
        else
            f=(10*2)+(10*4)+(10*6)+((d-30)*8);
    }
    printf("Total fare : %d",f);
}
