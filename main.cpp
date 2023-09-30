#include<bits/stdc++.h>
#include<cmath>
using namespace std;
// Conversions
// Decimal to number conversions and vice versa
int BinarytoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans = ans + (x*y);
        x = x * 2;
        n = n /10;
    }
    return ans;
}
int OctaltoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans = ans + (x*y);
        x = x*8;
        n = n/10;
    }
    return ans;
}
int HexadecimaltoDecimal(string n)
{
     
    
}
int main (void){
   int n;
   cin>> n;
   cout << OctaltoDecimal(n) << endl;
    
    return 0;
}



