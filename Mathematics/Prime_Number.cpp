#include<iostream>
#include<cmath>
using namespace std;

int main(void){
// Prime Number:
int n,flag=0;
cin >> n;
for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
        cout << "Non-Prime Number";
        flag = 1;
        break;
    }
}
if(flag == 0){
    cout << "Prime Number";
}
return 0;
}

