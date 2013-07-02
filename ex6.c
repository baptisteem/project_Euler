/*------------------------------------------------------------
--------------------------------------------------------------
Exercice 6 :

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

------------------------------------------------------------
----------------------------------------------------------*/

//Includes
#include <stdio.h>

//Defines
#define NUMBER_MAX 100

int main(int argc, char *arv[])
{
    int i;
    int sum_square=0;
    int square_sum=0;

    for(i=1;i<NUMBER_MAX+1;i++)
    {
	sum_square += i*i;
	square_sum += i;
    }

    square_sum*= square_sum;

    printf("%d\n", square_sum-sum_square);

    return 0;

 }
