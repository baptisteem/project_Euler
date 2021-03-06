/*-------------------------------------------------------------
---------------------------------------------------------------
Exercice 1 :

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
--------------------------------------------------------------
------------------------------------------------------------*/

//Includes
#include <stdio.h>

//Defines
#define max_number 1000

int main(int argc, char *argv[])
{ 
    int i;
    int result=0;

    for(i=1;i<max_number;i++)
    {
	if(i%3==0 || i%5==0)
	    result+=i;
    }
    //Display the result
    printf("%d", result);

   return 0;
}
