#include "Efficient_Fibonacci.h"



    using namespace std;

     int Efficient_Fibonacci::efficient_Fibonacci_Num(int value)

       {

           if (value == 1 || value == 2) return 1;

           if (table1[value]!=0) return table1[value];

               

           table1[value] = efficient_Fibonacci_Num(value - 1) + efficient_Fibonacci_Num(value- 2);

         

           return table1[value];

       }