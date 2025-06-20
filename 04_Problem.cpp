// Write a program that determines if two integers have opposite signs using bitwise
// operators only. If they have opposite signs print 1 otherwise print 0.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Check if the MSB (sign bit) of XOR result is 1
    int result = ((a ^ b) < 0) ? 1 : 0;

    cout << result << endl;
    return 0;
}
