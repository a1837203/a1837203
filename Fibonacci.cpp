#include "Fibonacci.h"

       int Fibonacci::fibonacci_Number(int val)

       {

           if(val == 0) return 0;

       if(val == 1 || val == 2) return 1;

       return fibonacci_Number(val-1) + fibonacci_Number(val-2);

       }
