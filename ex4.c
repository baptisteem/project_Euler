/*------------------------------------------------------------
--------------------------------------------------------------
Exercice 4 : 
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.

Find the largest palindrome made from the product of two 3-digit numbers.
--------------------------------------------------------------
------------------------------------------------------------*/

//Includes
#include <stdio.h>
#include <string.h>
#include <math.h>

//Defines
#define NUMBER_DIGIT 3

int main(int argc, char *argv[])
{
    int i,j;
    //Compute max and min number in function of the number of digit we want
    int min_number = pow(10,NUMBER_DIGIT-1);
    int max_number = pow(10,NUMBER_DIGIT);
    int max_palindrome = 0;

    //Run through the loop with all the posibility    
    for(i=min_number;i<max_number;i++)
    {
	for(j=min_number;j<max_number;j++)
	{
	    if(isPalindrome(i*j) && i*j>max_palindrome)
	        max_palindrome = i*j;
	}
    }
    
    printf("%d", max_palindrome);

    return 0;
}

/*
Return 1 if it's a palindrome or return 0
*/
int isPalindrome(int aNumber)
{
    int i;
    int palindrome=1;
    char buf[20];

    //Change the number in a string 
    sprintf(buf,"%d",aNumber);
    
    for(i=0;i<strlen(buf)/2;i++)
    {
	//Compare a digit with his opposite within the number
	if(buf[i]!=buf[strlen(buf)-1-i])
	   palindrome=0;
    }
    
    return palindrome;
}
