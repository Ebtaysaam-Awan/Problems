#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Set the 0th and 2nd bits to 1
    int golden_number = num | (1 << 0) | (1 << 2);

    cout << "Equivalent Golden Number: " << golden_number << endl;
    return 0;
}
