#include "Truckloads.h"

       int Trucklads::Truckloads_Number(int val)

       {

           if(val == 0) return 0;

       if(val == 1 || val == 2) return 1;

       return Truckloads_Number(val-1) + Truckloads_Number(val-2);

       }

      