/*-----------------------------------------------------------
-------------------------------------------------------------
Exercice 9 :
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
-------------------------------------------------------------
-----------------------------------------------------------*/

#include <stdio.h>

#define MAX 1000

int main(int argc, char *argv[])
{
    for(int c=2;c<MAX;c++)
    {
        for(int b=1;b<c;b++)
        {
            for(int a=0;a<b;a++)
            {
                if(a+b+c==MAX)
                {
                    if((a*a)+(b*b)==(c*c))
                        printf("%d\n",a*b*c);
                }
            }
        }
    }

    return 0;
}
