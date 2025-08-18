// Να υλοποιηθεί μια κλάση BankAccount με private μεταβλητή balance. Να υπάρχει friend function που θα εμφανίζει το υπόλοιπο.
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initial) {
        balance = initial;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Not enough funds!\n";
    }
    // Friend function
    friend void showBalance(const BankAccount& acc);
};

void showBalance(const BankAccount& acc) {
    cout << "Balance: " << acc.balance << " EUR" << endl;
}

int main() {
    BankAccount acc1(1000);
    acc1.deposit(500);
    acc1.withdraw(200);
    showBalance(acc1);
    return 0;
}
