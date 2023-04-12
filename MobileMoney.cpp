#include <iostream>

using namespace std;



int main() {

    int balance = 1000;

    int pin = 0000;

    int numAttempts = 0;



    while (true) {

        // Authentication

        int enteredPin;

        cout << "Enter PIN: ";

        cin >> enteredPin;

        if (enteredPin != pin) {

            numAttempts++;

            if (numAttempts >= 3) {

                cout << "Too many wrong attempts. Exiting program." << endl;

                return 0;

            }

            cout << "Incorrect PIN. Please try again." << endl;

            continue;

        }

        numAttempts = 0; // Reset wrong attempts counter



        // Menu

        cout << "Select an option:" << endl;

        cout << "1. Reset PIN" << endl;

        cout << "2. Check balance" << endl;

        cout << "3. Send money" << endl;

        cout << "4. Exit" << endl;

        int option;

        cin >> option;



        // Option 1: Reset PIN

        if (option == 1) {

            cout << "Enter new PIN: ";

            cin >> pin;

            cout << "PIN reset successful." << endl;

        }



        // Option 2: Check balance

        else if (option == 2) {

            cout << "Current balance: " << balance << endl;

        }



        // Option 3: Send money

        else if (option == 3) {

            int amount;

            cout << "Enter amount to send: ";

            cin >> amount;

            if (amount > balance) {

                cout << "Insufficient balance." << endl;

            } else {

                balance -= amount;

                cout << "Transaction successful. New balance: " << balance << endl;

            }

        }



        // Option 4: Exit

        else if (option == 4) {

            cout << "Exiting program." << endl;

            return 0;

        }



        // Invalid option

        else {

            cout << "Invalid option. Please try again." << endl;

        }

    }
return 0;
}

