#include <iostream>
using namespace std;

// Function to check if a number is a Harshad number
bool isHarshadNumber(int n) {
    int sum_of_digits = 0;
    int temp = n;

    // Calculate sum of digits of the number
    while (temp > 0) {
        sum_of_digits += temp % 10;
        temp /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    return (n % sum_of_digits == 0);
}

int main() {
    int number;
    
    // Input number from user
    cout << "Enter a number: ";
    cin >> number;

    // Check and display whether the number is a Harshad number or not
    if (isHarshadNumber(number)) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number."<<endl;
    }
}