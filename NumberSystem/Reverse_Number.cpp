#include<iostream>
#include<cmath>
using namespace std;

int main(void){
// Reverse a Number: 1234, 4321;

int n;
cin >> n;
int reverse = 0;
while(n>0){
    int lastdigit = n%10;
    reverse = reverse*10 + lastdigit;
    n = n/10;
}
cout << reverse;
return 0;
}

