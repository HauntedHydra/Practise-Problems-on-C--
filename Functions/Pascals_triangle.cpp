#include<iostream>
#include<cmath>
using namespace std;
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
int Factorial(int num){
    int factorial=1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;  
}
int main(){
int n;
cin >> n;    
for(int i =0; i<n; i++){
    for(int j=0; j<=i;j++){
        int element = Factorial(i)/(Factorial(j)*Factorial(i-j));
        cout << element << " ";
    }
    cout << endl;
}
return 0;
}
