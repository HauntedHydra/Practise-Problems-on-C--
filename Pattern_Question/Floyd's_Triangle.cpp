#include<iostream>
using namespace std;

int main(void){
// Floyd's Triangle:
    int row, count =1;
    cout << "Enter how many numbers you want to show in your triangle: ";
    cin >> row;
    for(int i=1; i<= row; i++){
        for(int j=1; j<=i;j++){
            cout<< count << " ";
            count++;
        }
        cout<< endl;
    }
   
    


    return 0;
}
