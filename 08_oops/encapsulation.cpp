//encapsulation in cpp
#include<iostream>

using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNumber, double initialBalance){
            accountNumber = accNumber;
            balance = initialBalance;
        }

        //way to encapsulate
        //getter funtion to get balance
        double getBalance()const {
            return balance;
        }

        //method to deposit
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposit amount" << endl;
            }
        }

        //withdraw method
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
            } else {
                cout << "Invalid withdrawn amount" << endl;
            }
        }
};


int main(){

    BankAccount myAccount("2727723883", 500);
    myAccount.deposit(3884);
    double myBal = myAccount.getBalance();

    cout << myBal;


    return 0;
}