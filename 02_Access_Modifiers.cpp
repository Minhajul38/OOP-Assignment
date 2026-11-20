#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void setBalance(double amount)
    {
        balance = amount;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account;

    account.setBalance(10000);

    cout << "Account Balance: " << account.getBalance() << endl;


    return 0;
}
