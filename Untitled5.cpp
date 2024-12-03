#include <iostream>
#include <string>
using namespace std;

int main() {
    string predefinedPassword = "1234"; // Set predefined password
    string userInput;
    int attempts = 3; // Number of allowed attempts

    cout << "Password Checker\n";

    for (int i = 1; i <= attempts; i++) {
        cout << "Attempt " << i << " of " << attempts << ": Enter the password: ";
        cin >> userInput;

        if (userInput == predefinedPassword) {
            cout << "Access granted\n";
            break; // Exit the loop if the password is correct
        } else {
            cout << "Incorrect password.\n";
        }

        if (i == attempts) {
            cout << "Access denied\n";
        }
    }

    return 0;
}

