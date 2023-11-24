#include <iostream>
#include <sstream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;
    public:
        BankAccount(string accnum, double bal) {
            accountNumber = accnum;
            balance = bal;
        }
        void depositMoney(double money) { 
            balance += money; 
            cout << "Deposit was successful! \nCurrent balance: " << balance << endl;
        }
        void withdrawMoney(double money) { 
            if (money <= balance) {
                balance -= money; 
                cout << "Withdraw was successful! \nCurrent balance " << balance << endl;
            }
            else {
                cout << "Withdraw was NOT successful! \nInsufficient balance " << endl;
            }
            
        }
};

int main() {
    string line, inputAN;
    double accBalance, depositedMoney, withdrawedMoney;
    
    cout << "Insert Account Number: ";
    getline(cin, inputAN);
    
    BankAccount acc1(inputAN, accBalance = 9999);

    cout << " \nWelcome " << inputAN << "! " << endl;
    cout << "Your current balance is: " << accBalance << endl;
    cout << "[1] Deposit        [2] Withdraw " << endl;
    getline(cin, line);
    int option = stoi(line);

    if (option == 1) {
        cout << endl << "Amount to deposit: ";
        getline(cin, line);
        depositedMoney = stod(line);
        acc1.depositMoney(depositedMoney);
    }
    else if (option == 2) {
        cout << endl << "Amount to withdraw: ";
        getline(cin, line);
        withdrawedMoney = stod(line);
        acc1.withdrawMoney(withdrawedMoney);
    }

    return 0;
}