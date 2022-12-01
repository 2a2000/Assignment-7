#include "taylor_sine.h"
#include <assert.h>



//for numerator
double power(double x, int p) {
        assert (x >= 0 && p >=0);

    if (x == 0 || p == 0 )
    {
        
     return 1;
    }
    double total=1;
    for(int i=1; i<=p; i++){
        total *= x;
    }
    return total; 
}

// for denominator 
double factorial(int n) {
    assert (n>=0);
    if (n == 0)
    {
     return 1;
    }
    double total=1;
    for (int i = 1; i <= n; i++){
      total*= i;
    }
    return total;
}

double taylor_sine(double x, int n)
{
    /* implement your function here */
    double total=0; 
    for (int i=1; i<=n; i++){
        if(n%2 == 0)
            total-= ((power(x,i))/(factorial(i)));
        else
            total+= ((power(x,i))/(factorial(i)));
    }
    return total;
}