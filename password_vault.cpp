#include <iostream>
#include <string>

using namespace std;

int main() {
    string correctUser = "admin";
    string correctPass = "12345";
    
    string inputUser, inputPass;
    int choice;

    cout << "========================================\n";
    cout << "      SECURE CREDENTIAL VAULT           \n";
    cout << "========================================\n";

    cout << "Enter username: ";
    cin >> inputUser;

    cout << "Enter password: ";
    cin >> inputPass;

    if (inputUser == correctUser && inputPass == correctPass) {
        cout << "\nAccess Granted! Welcome to your vault.\n";
        
        do {
            cout << "\n--- Vault Menu ---\n";
            cout << "1. View Stored Wi-Fi Password\n";
            cout << "2. View Stored Email Password\n";
            cout << "3. Exit Vault\n";
            cout << "Select an option (1-3): ";
            cin >> choice;

            if (choice == 1) {
                cout << "-> Wi-Fi Password: MyHomeNetwork_99\n";
            } 
            else if (choice == 2) {
                cout << "-> Email Password: SecretCode#2026\n";
            } 
            else if (choice == 3) {
                cout << "Logging out of vault...\n";
            } 
            else {
                cout << "Invalid choice. Please pick 1, 2, or 3.\n";
            }

        } while (choice != 3);

    } else {
        cout << "\n🚨 ACCESS DENIED: Incorrect username or password!\n";
        cout << "Alert: Unauthorized access attempt logged.\n";
    }

    cout << "========================================\n";
    return 0;
}
