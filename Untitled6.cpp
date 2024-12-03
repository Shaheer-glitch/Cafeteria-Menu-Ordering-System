#include <iostream>
using namespace std;

int main() {
    int marks;
    char choice;

    do {
        // Prompt user for marks
        cout << "Enter the marks (0-100): ";
        cin >> marks;

        // Validate marks
        if (marks < 0 || marks > 100) {
            cout << "Invalid marks! Please enter a value between 0 and 100.\n";
        } else {
            // Determine the grade
            if (marks >= 90) {
                cout << "Grade: A\n";
            } else if (marks >= 80) {
                cout << "Grade: B\n";
            } else if (marks >= 70) {
                cout << "Grade: C\n";
            } else if (marks >= 60) {
                cout << "Grade: D\n";
            } else {
                cout << "Grade: F\n";
            }
        }

        // Ask user if they want to calculate for another student
        cout << "Do you want to calculate another grade? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeat if user chooses 'y' or 'Y'

    cout << "Goodbye!\n";
    return 0;
}

