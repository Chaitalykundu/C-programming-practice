/* Author : Chaitaly Kundu
Purpose : Apti Cover within 2 months
Date : 9th Jan, 2021 */


// Topic : Round off value

// Example for ceil() and floor() functions: 
/* ceil(d): double, return a value rounded up (off) to the next higher integer.
floor(d): double,return a value rounded down to the next lower integer. */

#include<stdio.h>
#include<math.h>

int main()
{
    printf("\n Round off 1.44 : %.1f" , ceil(1.44) ); // O/P: 2.0
    printf("\n Round off 5.65  : %f" , ceil(5.65) );   // O/P: 2.0
    printf("\n Round off 5.65  : %f" , roundup(5.65) );   // O/P: 2.0
 
    printf("\n Result : %f" , floor(1.44) );     // O/P: 1.000000
    printf("\n Result : %f" , floor(5.65) );      // O/P: 5.000000

    return 0;
}