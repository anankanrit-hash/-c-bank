#include <iostream>
#include <string>
using namespace std;

class Bank {
    private:
        string owner,accountNum;
        double balance;
    public:
        Bank() { owner = "Guest"; accountNum = "None"; balance = 0.0; }
        Bank(string accNum, double b){
            owner = "Undefined"; accountNum = accNum; balance = b; 
            cout <<"Call account number: " << accountNum <<endl;
        }
        Bank(string h, string accNum, double b){
            owner = h; accountNum = accNum; balance = b;
            cout << "Call account owner name: " <<owner << endl;
            cout << "Deposit: +" << balance << endl; }
            ~Bank() { cout << "Destructor class Bank_Account" <<endl; }
            void bankdeposit(double amount) {
                if (amount > 0) {
                    balance += amount;
                    cout << "Bank_deposit: " << amount << endl;
                }
            }
            void withdraw(double amount) {
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdraw: -" << amount << endl;
                }
            }
            void showData() {
                cout << "Owner name: " << owner << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Balance: " << balance << endl;
            }
};

int main() {
    Bank acc1;
    acc1.bankdeposit(700);
    acc1.withdraw(0);
    acc1.showData();
    cout << "/////////////////////////////////\n" << endl;
    
    Bank acc2("Anun","154-423567-0",500);
    acc2.bankdeposit(700);
    acc2.withdraw(200);
    acc2.showData();
    cout << "/////////////////////////////////\n" << endl;
    
    Bank acc3 = acc2;
    acc3.withdraw(500);
    acc3.showData();
    cout << "/////////////////////////////////\n" << endl;

    return 0;
};