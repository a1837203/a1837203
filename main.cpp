

    #include "Reverse.h"

    #include "EfficientTruckloads.h"

    #include "Truckloads.h"
   
    using namespace std;

    int main()

    {

       Reverse rev1;

       Truckloads fibval;

       EfficientTruckloads efficien;


       int i,num1,num2,sa;


       if(i<0)



     

       if(num1<0)

        
     

       if(num2<0)

        

       return 0;

    }

  



#include "EfficientTruckloads.h"



    using namespace std;

     int EfficientTruckloads::EfficientTruckloads_Num(int value)

       {

           if (value == 1 || value == 2) return 1;

           if (table1[value]!=0) return table1[value];

               

           table1[value] = EfficientTruckloads_Num(value - 1) + EfficientTruckloads_Num(value- 2);

         

           return table1[value];

       }





