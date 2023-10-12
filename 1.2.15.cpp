#include <iostream>
using namespace std;


int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number; 

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
       cout << "The entered number is a palindrome." << endl;
    } else {
        cout << "The entered number is not a palindrome." << endl;
    }

    return 0;
}