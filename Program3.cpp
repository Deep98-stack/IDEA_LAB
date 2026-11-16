// Write a C/C++ program to accept three decimal numbers and find the largest number.
// Requirement
// Use conditional statements.
// The program should also handle the case where two or more numbers are equal.

#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three decimal numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2 && num1 == num3) {
            cout << "All three numbers are equal: " << num1 << endl;
        } else if (num1 == num2) {
            cout << "The largest number is: " << num1 << " (equal to second number)" << endl;
        } else if (num1 == num3) {
            cout << "The largest number is: " << num1 << " (equal to third number)" << endl;
        } else {
            cout << "The largest number is: " << num1 << endl;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num2 == num3) {
            cout << "The largest number is: " << num2 << " (equal to third number)" << endl;
        } else {
            cout << "The largest number is: " << num2 << endl;
        }
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}
