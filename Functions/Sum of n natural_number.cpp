#include<iostream>
#include<cmath>
using namespace std;
// Add simple numbers: 
// First of all loop methods: 
int sum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
         sum+= i;
    }
    return sum;
}
int main (void){
    int n;
    cin >> n;
    cout << sum(n) << endl;



    return 0;
}