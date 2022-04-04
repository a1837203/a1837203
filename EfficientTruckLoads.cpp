#include " EfficientTruckloads.h"

    using namespace std;

     int  EfficientTruckloads:: EfficientTruckloads_Num(int value)

       {

           if (value == 1 || value == 2) return 1;

           if (table1[value]!=0) return table1[value];

               

           table1[value] =  EfficientTruckloads_Num(value - 1) +  EfficientTruckloads_Num(value- 2);

         

           return table1[value];

       }