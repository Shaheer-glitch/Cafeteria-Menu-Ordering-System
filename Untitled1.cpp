#include <iostream>
using namespace std;

int main() {
    int choice;
    double total_bill = 0.0;

    do {
        // Display the menu
        cout << "\nCafeteria Menu:\n";
        cout << "1. Tea - $2\n";
        cout << "2. Coffee - $3\n";
        cout << "3. Sandwich - $5\n";
        cout << "4. Burger - $7\n";
        cout << "5. Exit\n";
        cout << "Please select an item (1-5): ";
        
        cin >> choice;

        // Handle menu choices using a switch statement
        switch (choice) {
            case 1:
                total_bill += 2.0;
                cout << "You selected Tea. $2 added to your bill.\n";
                break;
            case 2:
                total_bill += 3.0;
                cout << "You selected Coffee. $3 added to your bill.\n";
                break;
            case 3:
                total_bill += 5.0;
                cout << "You selected Sandwich. $5 added to your bill.\n";
                break;
            case 4:
                total_bill += 7.0;
                cout << "You selected Burger. $7 added to your bill.\n";
                break;
            case 5:
                cout << "\nThank you for ordering. Your total bill is $" << total_bill << ".\n";
                break;
            default:
                cout << "Invalid choice! Please select a number between 1 and 5.\n";
        }
    } while (choice != 5); // Repeat until the user selects "Exit"

    return 0;
}











