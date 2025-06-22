// You are tasked with building a program that facilitates unit conversion between different 
// units of measurement. The program should be able to convert units such as inches to 
// centimeters and pounds to kilograms, allowing users to input the unit type as characters ('I' 
// for inches, 'P' for pounds) and the value to convert.
// Write a C++ program that takes the unit type as a character and the value as input and 
// performs the necessary unit conversion, providing the converted value as output.
// The program supports the following unit conversions:
// Inches to Centimeters: Multiply the input value (in inches) by 2.54 to obtain the equivalent 
// value in centimeters.
// 8
// Pounds to Kilograms: Multiply the input value (in pounds) by 0.453592 to obtain the 
// equivalent value in kilograms.
// Ensure that the program handles invalid unit types gracefully and prompts the user to enter 
// a valid unit type.
// Your program should output the converted value along with the appropriate unit


#include <iostream>
using namespace std;

int main() {
    char unit;
    double value;

    cout << "Enter the unit type ('I' for inches, 'P' for pounds): ";
    cin >> unit;
    
    switch (unit) {
        case 'I':
        case 'i':
            cout << "Enter the value in inches: ";
            cin >> value;
            cout << value << " inches is equal to " << value * 2.54 << " centimeters." << endl;
            break;
        
        case 'P':
        case 'p':
            cout << "Enter the value in pounds: ";
            cin >> value;
            cout << value << " pounds is equal to " << value * 0.453592 << " kilograms." << endl;
            break;
        
        default:
            cout << "Invalid unit type entered. Please enter 'I' for inches or 'P' for pounds." << endl;
            break;
    }
    
    return 0;
}
