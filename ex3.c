/*------------------------------------------------------------
--------------------------------------------------------------
Exercice 3 :
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
--------------------------------------------------------------
------------------------------------------------------------*/

//Includes
#include <stdio.h>
#include <math.h>

//Defines
#define MAX_NUMBER 600851475143

//Prototypes
int isPrimeral(int aNumber);

int main(int argc, char *argv[])
{
    int i;
    int max_primeral=0;

    for(i=sqrt(MAX_NUMBER);max_primeral==0;i--)
    {
	if(isPrimeral(i)==1)
	{
	    if(MAX_NUMBER%i==0)
	    	max_primeral=i;
	}
    }

    printf("%d", max_primeral);

    return 0;
}

/*
Return 1 if it is primeral or return 0
*/
int isPrimeral(int aNumber)
{
    int i;

    for(i=2;i<sqrt(aNumber);i++)
    {
	if(aNumber%i==0)
	    return 0;
    }
    return 1;
}
