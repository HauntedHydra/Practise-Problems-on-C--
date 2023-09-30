#include<iostream>
using namespace std;

int main(void){
// Remainder Without Modulus: 

int Divisor, Divisible, Result, Remainder;
cin>> Divisible>>Divisor;
Result = Divisible / Divisor;
Remainder = Divisible -(Result*Divisor);
cout << Remainder;

   
    


    return 0;
}
