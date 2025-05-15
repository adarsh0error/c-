/*1. Bank Account Management: Develop a banking system that manages customers' accounts.
• Define a BankAccount class with attributes: accountNumber, accountHolderName,
and balance.
• Implement member functions for depositing (deposit), withdrawing (withdraw), and
displaying account details (display).
• Ensure that the withdraw function does not allow overdrafts (i.e., balance should not
go negative).
Write the class definition and demonstrate how an object of this class can be used.
*/
#include <iostream>
#include<string>
using namespace std;

class BankAccount{
    string AccountNumber;
    string AccountHolderName;
    double balance;

    public:
    BankAccount(string accNumber, string accholder, double bal){
        AccountNumber = accNumber;
        AccountHolderName = accholder;
        balance = bal;
    }

    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout<<"deposited: "<<amount<<endl;
            cout<<"new balance: "<<balance<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }

        void withdraw(double amount){
            if(amount<=balance){
                balance -= amount;
                cout<<"withdrawn: "<<amount<<endl;
                cout<<"new baalnce: "<<balance<<endl;

            }
            else{
                cout<<"insufficient balance"<<endl;
            }
        }

        void displayDetails(){
            cout<<"Account Number: "<<AccountNumber<<endl;
            cout<<"Account Holder Name: "<<AccountHolderName<<endl;
            cout<<"Balance: "<<balance<<endl;

        }
};

int main(){
    BankAccount b1{"123456789", "Adarsh", 1000.0};
    b1.displayDetails();
    b1.deposit(500.0);
    b1.withdraw(200.0);
    b1.withdraw(2000.0); 
    b1.displayDetails();
    return 0;
}
