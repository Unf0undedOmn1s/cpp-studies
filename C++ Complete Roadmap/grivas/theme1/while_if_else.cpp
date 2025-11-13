#include <iostream>
using namespace std;

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n Main Menu\n";
        cout << "1. Say Hello\n";
        cout << "2. Add Numbers\n";
        cout << "3. Show Odd/Even Checker\n";
        cout << "4. Exit\n";
        cout << "Enter your choice:";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello, user. This is a guessing game\n";
        } 
        else if (choice == 2) {
            double a, b;
            cout << "Enter two numbers:";
            cin >> a >> b;
            cout << "Sum: " << (a + b) << endl;
        } 
        else if (choice == 3) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (num % 2 == 0)
                cout << num << "is even.\n";
            else
                cout << num << "is odd.\n";
        } 
        else if (choice == 4) {
            cout << "Exiting...\n";
        } 
        else {
            cout <<"Invalid choice. Try again...\n";
        }
    }
    return 0;
}
