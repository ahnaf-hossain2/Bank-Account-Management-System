#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        string accountName;
        int accountNumber;
        double balance;
        string accountType;
    public:
        // Here I used constructor to initialize the values of the class members more easily and efficiently.
        // Without it I have to use set functions to set the values of the class members.
        // Which is a bit time consuming and lengthy.
        Account(string name, int number, double bal, string type) {
            setAccountName(name);
            setAccountNumber(number);
            setBalance(bal);
            setAccountType(type);
        }

        void setAccountName(string name) { accountName = name; }
        void setAccountNumber(int number) { accountNumber = number; }
        void setBalance(double bal) { balance = bal; }
        void setAccountType(string type) { accountType = type; }

        string getAccountName() { return accountName; }
        int getAccountNumber() { return accountNumber; }
        double getBalance() { return balance; }
        string getAccountType() { return accountType; }

        void deposit(int amount) {
            if (amount < 0) {
                cout << "|  Invalid amount." << endl;
                return;
            } else {
            balance += amount;
            cout << "|  Deposit of " << amount << " to account " << accountNumber << " is successful." << endl;
            }
        }

        bool withdraw(int amount) {
            if (balance >= amount) {
                balance -= amount;
                cout << "|  Withdraw of " << amount << " from account " << accountNumber << " is successful." << endl;
                return true;
            } else { 
                cout << "|  Insufficient balance." << endl;
                return false;
            }
        }

        // Here I used & to pass the object by reference to avoid copying the object.
        bool transferMoney(int amount, Account &receiver) {
            if ( amount > 0 && withdraw(amount)) {
                cout << "|  Transfer of " << amount << " to account " << receiver.getAccountNumber() << " is successful." << endl;
                receiver.deposit(amount);
                return true;
            } else {
                cout << "|  Transfer failed." << endl;
                return false; 
            }
        }

    void showAccountDetails() {
            cout << "+---------------------+" << endl;
            cout << "|  Account Details    |" << endl;
            cout << "+---------------------+" << endl;
            cout << "|  Name           : " << accountName << endl;
            cout << "|  Account Number : " << accountNumber << endl;
            cout << "|  Balance        : " << balance << endl;
            cout << "|  Account Type   : " << accountType << endl;
            cout << "+---------------------+" << endl;

    }
};

int main() {
    cout << "+---------------------+" << endl;
    cout << "|     Bank Account    |" << endl;
    cout << "+---------------------+" << endl;

    Account account1( "MD. Ahnaf Hossain", 57370, 1000.00, "Savings" );
    account1.showAccountDetails();
    Account account2( "Pulok Shahriar", 24567, 5000.00, "Savings" );
    account2.showAccountDetails();

    cout << "+---------------------+" << endl;
    cout << "|     Transactions    |" << endl;
    cout << "+---------------------+" << endl;

    account1.deposit(4500);
    account1.withdraw(2000);
    account1.transferMoney(1000, account2);
    cout << "+---------------------+" << endl;

    account1.showAccountDetails();
    account2.showAccountDetails();
    
    return 0;
}