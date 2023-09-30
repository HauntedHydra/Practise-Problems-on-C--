#include<iostream>
using namespace std;

int main(void){
// Create a problem on A basic Calculator

    int n1,n2;
    char op;
    cin>> n1>>op>>n2;
    switch (op)
    {
    case '+':
        /* code */
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1-n2 << endl;
        break;
    case '*':
        cout << n1*n2 << endl;
        break;
    case '/':
        cout << n1/n2 << endl;
        break;
    default:
        cout << "Invalid output";
        break;
    }
    



    return 0;
}
