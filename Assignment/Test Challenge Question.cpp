#include <iostream>
#include <vector>

// BankAccount Class
class BankAccount {
private:
    static int totalAccounts;  // Static data member for total number of accounts
    static const int MIN_HIGH_VALUE = 1000;  // Static const data member for high-value account threshold
    int accountNumber;  // Data member for account number
    double balance;  // Data member for account balance

public:
    BankAccount(double initialBalance) {
        accountNumber = ++totalAccounts;
        balance = initialBalance;
    }

    static int getTotalAccounts() {
        return totalAccounts;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    void display() const {
        std::cout << "Account Number: " << accountNumber << ", Balance: " << balance << std::endl;
    }

    bool isHighValueAccount() const {
        return balance >= MIN_HIGH_VALUE;
    }
};

// Initialize static member
int BankAccount::totalAccounts = 0;

// Bank Class
class Bank {
private:
    std::vector<BankAccount> accounts;  // Vector to store BankAccount objects

public:
    void addAccount(double initialBalance) {
        accounts.emplace_back(initialBalance);
    }

    void displayHighValueAccounts() const {
        for (const auto& account : accounts) {
            if (account.isHighValueAccount()) {
                account.display();
            }
        }
    }

    const std::vector<BankAccount>& getAccounts() const {
        return accounts;
    }
};

// Main Function
int main() {
    Bank bank;

    // Create bank accounts with varying balances
    bank.addAccount(500);
    bank.addAccount(1500);
    bank.addAccount(800);
    bank.addAccount(1200);
    bank.addAccount(3000);
    bank.addAccount(1800);
    bank.addAccount(750);

    // Display details of all accounts
    std::cout << "All Accounts:" << std::endl;
    for (const auto& account : bank.getAccounts()) {
        account.display();
    }

    // Display high-value accounts
    std::cout << "\nHigh-Value Accounts:" << std::endl;
    bank.displayHighValueAccounts();

    // Display total number of accounts
    std::cout << "\nTotal Accounts Created: " << BankAccount::getTotalAccounts() << std::endl;

    return 0;
}
