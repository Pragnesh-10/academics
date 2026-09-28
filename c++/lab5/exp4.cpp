#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Display balance
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1001, 5000);

    cout << "Initial Account Details:" << endl;
    account.displayBalance();

    cout << "\nDepositing money..." << endl;
    account.deposit(2000);

    cout << "\nAfter Deposit:" << endl;
    account.displayBalance();

    cout << "\nAttempting withdrawal of 3000..." << endl;
    account.withdraw(3000);

    cout << "\nAfter Withdrawal:" << endl;
    account.displayBalance();

    cout << "\nAttempting withdrawal of 5000..." << endl;
    account.withdraw(5000);

    cout << "\nFinal Account Details:" << endl;
    account.displayBalance();

    return 0;
}