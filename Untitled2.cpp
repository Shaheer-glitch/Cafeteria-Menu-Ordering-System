#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Starting balance
    int choice;
    double amount;

    do {
        // Display the menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Please select an option (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: // Check Balance
                cout << "Your current balance is: $" << balance << "\n";
                break;
            case 2: // Withdraw Money
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance! You only have $" << balance << ".\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount! Please enter a positive value.\n";
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully. New balance: $" << balance << "\n";
                }
                break;
            case 3: // Deposit Money
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount! Please enter a positive value.\n";
                } else {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully. New balance: $" << balance << "\n";
                }
                break;
            case 4: // Exit
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default: // Invalid Option
                cout << "Invalid choice! Please select a valid option (1-4).\n";
        }
    } while (choice != 4); // Repeat until the user selects "Exit"

    return 0;
}

