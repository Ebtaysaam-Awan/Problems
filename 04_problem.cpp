#include <iostream>
using namespace std;

int main() {
    int age, examScore;
    char parentalConsent;

    // Taking input from the user
    cout << "Enter student's age: ";
    cin >> age;
    cout << "Enter exam score (out of 100): ";
    cin >> examScore;

    // Checking if parental consent is required
    bool hasParentalConsent = false;
    if (age < 21) {
        cout << "Do you have parental consent? (y/n): ";
        cin >> parentalConsent;
        hasParentalConsent = (parentalConsent == 'y' || parentalConsent == 'Y');
    }

    // Checking eligibility conditions
    if (age >= 18 && age <= 30 && examScore >= 60) {
        if (age >= 21 || hasParentalConsent) {
            cout << "You are eligible to enroll in the course.\n";
        } else {
            cout << "You are not eligible to enroll as you need parental consent.\n";
        }
    } else {
        cout << "You are not eligible to enroll in the course.\n";
    }

    return 0;
}
