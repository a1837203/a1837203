#include "Reverse.h"



       int Reverse::reverse_Digit(int val)

       {

           if(val<10) return val;

       int len=0;

       for (int i=val; i; i/=10) len++;

     

       return val%10*(int) (10, len-1) + reverse_Digit(val/10);

       }
       