/*------------------------------------------------------------
--------------------------------------------------------------
Exercice 12:
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
  3: 1,3
   6: 1,2,3,6
   10: 1,2,5,10
   15: 1,3,5,15
   21: 1,3,7,21
   28: 1,2,4,7,14,28
   We can see that 28 is the first triangle number to have over five divisors.

   What is the value of the first triangle number to have over five hundred divisors?
-------------------------------------------------------------
-----------------------------------------------------------*/

//Includes 
#include <stdio.h>
#include <math.h>

//Defines 
#define NUM_MAX_DIVISOR 500

int main(int argc, char *argv[])
{
    int i;
    int current_num_divisor=0;
    int current_number=0;
    
    //Try all numbers utile we find the first one to have NUM_MAX_DIVISOR divisor
    for(i=1;current_num_divisor<NUM_MAX_DIVISOR;i++)
    {
        current_number+=i;
	current_num_divisor = count_num_divisor(current_number);
    }

    printf("%d", current_number);

    return 0;
}

int count_num_divisor(int current_number)
{
    int i;
    int num_divisor = 2; //=2 because 1 and the same number are already a divisor

    //We stop at the square root because we don't have to test them all
    for(i=2;i<sqrt(current_number);i++)
    {
        if(current_number%i==0)
	    num_divisor+=2;//Add 2 because if one number divide the number before the square root there is also one after the square root
    }

    return num_divisor;
}

