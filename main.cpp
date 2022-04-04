#include<iostream>

    #include "Reverse.h"

    #include "Efficient_Fibonacci.h"

    #include "Fibonacci.h"

    //cin and cout statement

    using namespace std;

   

    int main()

    {

      

       Reverse rev1;

       Fibonacci fibval;

       Efficient_Fibonacci efficien;

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

           cout << fibval.fibonacci_Number(num1)<<" ";

     

       if(num2<0)

           cout << "ERROR" <<endl;

       else

           cout << efficien.efficient_Fibonacci_Num(num2) << endl;

       return 0;

    }

  

//Efficient_Fibonacci.cpp

#include "Efficient_Fibonacci.h"

//cin and cout statement

    using namespace std;

     int Efficient_Fibonacci::efficient_Fibonacci_Num(int value)

       {

           if (value == 1 || value == 2) return 1;

           if (table1[value]!=0) return table1[value];

               

           table1[value] = efficient_Fibonacci_Num(value - 1) + efficient_Fibonacci_Num(value- 2);

         

           return table1[value];

       }