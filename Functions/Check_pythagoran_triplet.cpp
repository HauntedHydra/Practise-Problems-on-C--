#include <iostream>
using namespace std;

bool isPythagoreanTriplet(int a, int b, int c) {
    // Sort the numbers in ascending order
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    
    // Check if a^2 + b^2 = c^2
    return (a * a + b * b == c * c);
}

int main() {
    int a, b, c;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    if (isPythagoreanTriplet(a, b, c)) {
        cout << "These numbers form a Pythagorean triplet." << endl;
    } else {
        cout << "These numbers do not form a Pythagorean triplet." << endl;
    }
    
    return 0;
}
