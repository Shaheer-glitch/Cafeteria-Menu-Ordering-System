#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Validate input to ensure it's positive
    if (n <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        // Display the header for the table
        cout << "Number\tSquare\tCube\n";
        
        // Use a for loop to generate squares and cubes
        for (int i = 1; i <= n; i++) {
            int square = i * i; // Calculate square
            int cube = i * i * i; // Calculate cube
            cout << i << "\t" << square << "\t" << cube << endl;
        }
    }

    return 0;
}

