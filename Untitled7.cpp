#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is positive
    if (number <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        cout << "Divisors of " << number << " are: ";

        // Use a for loop to find divisors
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) { // Check if i is a divisor
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

