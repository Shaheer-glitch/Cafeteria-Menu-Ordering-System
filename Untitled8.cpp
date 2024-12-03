#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Validate input to ensure it's positive
    if (n <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        // Use nested loops to generate the reverse number pattern
        for (int i = n; i >= 1; i--) {
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }
            cout << endl; // Move to the next line after each row
        }
    }

    return 0;
}

