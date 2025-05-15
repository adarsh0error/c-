#include<iostream>
#include<string>
using namespace std;

class BankAcount {
    private:
    string accountname;
    string accountnumber;
    double balance;

    public:
    BankAcount(string accN, string accH, double bal){
        accountname = accH;
        accountnumber = accN;
        balance = (bal>0)? bal:0;
    }

    void deposit(double amount){
        if(amount>0){
            balance+= amount;
            cout<<"the amount of"<<amount<<"was added \n";
        }
    }

    void withdraw(double amount){
        if(amount>0 && amount<balance){
            balance-= amount;
            cout<<"the amount of"<<amount<<"was taken out \n";
        }
    }

    void display(){
        cout<<"the account number is "<<accountnumber<<"\n";
        cout<<"the name of the account holder is "<<accountname<<"\n";
        cout<<"the total balance is "<<balance<<"\n";
    }
};

int main(){
    BankAcount account("123459789", "adarsh", 25000);
    account.display();

    account.deposit(500);
    account.display();

    account.withdraw(5000);
    account.display();

    account.withdraw(500000);
    account.display();

    return 0;
}