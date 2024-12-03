#include <iostream>
using namespace std;

int main() {
    int number;
    int odd_count = 0;
    int even_count = 0;

    cout << "Enter numbers (0 to stop):\n";

    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        if (number == 0) {
            break; // Exit the loop when 0 is entered
        }

        if (number % 2 == 0) {
            even_count++; // Increment even counter
        } else {
            odd_count++; // Increment odd counter
        }
    }

    // Display the counts
    cout << "\nTotal odd numbers: " << odd_count << "\n";
    cout << "Total even numbers: " << even_count << "\n";

    return 0;
}

