#include<iostream>
#include<cmath>
using namespace std;
// Print the prime numbers between two given numbers by using functions:

void Febonacci(int num){
    int t1=0, t2=1, t3;
    for(int i=1; i<=num;i++){
        cout << t1 <<" ";
        t3 = t1+t2;
        t1=t2;
        t2=t3;
    }
    return;
}
int main(){

int n;
cin>> n;
Febonacci(n);

return 0;
}
