#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
    int accountNumber;
    string name;
    double balance;
public:
    void createAccount() 
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, name);
        balance = 0;
        cout << "Account created successfully!\n\n";
    }
    void deposit() 
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) 
        {
            balance += amount;
            cout << "Amount deposited successfully!\n\n";
        } 
        else 
        {
            cout << "Invalid amount!\n\n";
        }
    }
    void withdraw() 
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n\n";
        } 
        else 
        {
            cout << "Insufficient balance or invalid amount!\n\n";
        }
    }
    void display() 
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: $" << balance << "\n\n";
    }
};
int main() {
    BankAccount account;
    int choice;

    while (true) 
    {
        cout << "Bank Management System\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Thank you for using the system!\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n\n";
        }
    }
}