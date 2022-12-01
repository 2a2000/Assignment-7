#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#include "taylor_sine.h"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
   double x = 3.14;
    int n = 4;
    printf("Result from ANSI is %lf", sin(x));
    printf(" Taylor_sin reslult is %lf", taylor_sine(x, n));
    return 0; 
    }

