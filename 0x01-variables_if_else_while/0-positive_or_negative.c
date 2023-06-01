#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Function that prints whether random number n is positive, negative or zero */
int positive_or_negative(int n)
{
   if (n > 0)
       printf("%d is positive\n", n);
   else if (n == 0)
       printf("%d is zero\n", n);
   else
       printf("%d is negative\n", n);
   return 0;
}

/**
 
main - Entry point
This code will print whether random number is positive, negative or zero
Return: Always 0 (Success)
*/
int main(void)
{
   int n;
   srand(time(0));
   n = rand() - RAND_MAX / 2;  /* generate random number /
   positive_or_negative(n);    / call function to print result */
   return (0);
}

