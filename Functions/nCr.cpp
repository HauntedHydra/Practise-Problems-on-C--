#include<iostream>
#include<cmath>
using namespace std;
// Print the prime numbers between two given numbers by using functions:
int Factorial(int num){
    int factorial=1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
    
}
int main(){

int n,r;
cin >> n >> r;
int nCr = Factorial(n)/(Factorial(r)*Factorial(n-r));
cout << nCr;


return 0;
}
