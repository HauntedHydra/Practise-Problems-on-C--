#include<iostream>
#include<cmath>
using namespace std;

int main(void){
// Reverse a Number: 1234, 4321;

int n;
cin >> n;
int reverse = 0;
int sum = 0;
int originaln = n;
while (n>0){
    reverse = n%10;
    reverse = reverse*reverse*reverse;  // You can use pow(lastdigit,3), I have got issues with that, so I used the traditional one
    sum = reverse + sum;
    n = n/10;
}
if(sum == originaln ){
    cout << "Armstrong Number";
}else{
    cout << "Non Armstrong Number";
}
return 0;
}
