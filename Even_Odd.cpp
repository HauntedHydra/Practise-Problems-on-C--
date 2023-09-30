#include<iostream>
using namespace std;

int main(void){
    // condition statements: 1. if-else 2.switch-case statement
    int a,b,c;
    cin >> a>> b>> c;
    if(a>b){
        if(a>c){
            cout << "The biggest number: " << a;
        }else{
            cout << "The biggest number: " << c;
        }
        }else{
                if(b>c){
                    cout << "The biggest number: " << b;
                }else{
                    cout << "The biggest number: " << c;
                }
        }

    return 0;
}
