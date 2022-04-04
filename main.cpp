#include<iostream>

    #include "Reverse.h"

    #include "EfficientTruckloads.h"

    #include "Truckloads.h"
   
    using namespace std;

    int main()

    {

       Reverse rev1;

       Truckloads fibval;

       EfficientTruckloads efficien;

       cout << "please enter the word." << endl;

       string s1;

       int i,num1,num2,sa;

       cin >> i>>s1>>num1>>num2;

       if(i<0)

           cout<<"ERROR"<<" ";

       else

           cout<<rev1.reverse_Digit(i)<<" ";

         

       cout<<rev1.reverseString(s1)<<" ";

     

       if(num1<0)

           cout << "ERROR"<<" ";

       else

           cout << fibval.Truckloads_Number(num1)<<" ";

     

       if(num2<0)

           cout << "ERROR" <<endl;

       else

           cout << efficien.EfficientTruckloads_Num(num2) << endl;

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



#include <vector>

    using namespace std;

    class EfficientTruckloads

    {

       vector<int> table1;

       public:

           EfficientTruckloads() : table1(20) { }

       int EfficientTruckloads_Num(int val);

    };

