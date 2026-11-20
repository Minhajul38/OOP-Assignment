#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:

    void setAccountInformation(int number, string holder, double amount)
    {
        accountNumber = number;
        accountHolder = holder;

        if (amount >= 0)
            balance = amount;
        else
            balance = 0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful." << endl;
        }
        else
        {
            cout << "Invalid amount." << endl;
        }
    }


    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    void displayAccountInformation()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << getBalance() << endl;
    }
};

int main()
{

    BankAccount account1, account2;

    account1.setAccountInformation(101, "piash", 5000);
    account2.setAccountInformation(102, "Rahim", 3000);

    cout << "Account 1 Transactions:" << endl;
    account1.deposit(2000);
    account1.withdraw(1000);

    cout << "\nAccount 2 Transactions:" << endl;
    account2.deposit(1500);
    account2.withdraw(5000);
    cout << "\nAccount 1 Information:" << endl;
    account1.displayAccountInformation();

    cout << "\nAccount 2 Information:" << endl;
    account2.displayAccountInformation();

    return 0;
}
