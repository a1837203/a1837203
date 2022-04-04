#include "TruckLoads.h"

       int TruckLoads::TruckLoads_Number(int val)

       {

           if(val == 0) return 0;

       if(val == 1 || val == 2) return 1;

       return TruckLoads_Number(val-1) + TruckLoads_Number(val-2);

       }

      