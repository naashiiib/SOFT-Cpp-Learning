#include <iostream>
using namespace std;

class BankAccount {
private:
    long accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(long no, string holder, double amt) {
        accountNumber = no;
        accountHolder = holder;
        balance = amt;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1(123456, "Anu", 5000);

    b1.deposit(1000);
    b1.withdraw(500);
    b1.displayBalance();

    return 0;
}