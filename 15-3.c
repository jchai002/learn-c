#include <stdio.h>
#include <stdarg.h>

double MultiDouble(int x, ...)
{
   va_list   arglist;
   int i;
   double result = 1.0;

   printf("The number of arguments  %d\n", x);
   va_start (arglist, x);
   for (i=0; i<x; i++)
      result *= va_arg(arglist, double);
   va_end (arglist);
   return result;
}

int main ()  {
    double d1 = 1.5;
    double d2 = 2.5;
    double d3 = 3.5;
    double d4 = 4.5;

    printf("Given an argument %2.1f\n", d1);
    printf("The result returned by MultiDouble()  %2.1f\n\n",
       MultiDouble(1, d1));
    printf("Given arguments %2.1f and %2.1f\n", d1, d2);
    printf("The result returned by MultiDouble()  %2.1f\n\n",
       MultiDouble(2, d1, d2));
    printf("Given arguments %2.1f, %2.1f and %2.1f\n", d1, d2, d3);
    printf("The result returned by MultiDouble()  %2.1f\n\n",
       MultiDouble(3, d1, d2, d3));
    printf("Given arguments %2.1f, %2.1f, %2.1f, and %2.1f\n", d1, d2, d3, d4);
    printf("The result returned by MultiDouble()  %2.1f\n",
       MultiDouble(4, d1, d2, d3, d4));
    return 0;
 }
