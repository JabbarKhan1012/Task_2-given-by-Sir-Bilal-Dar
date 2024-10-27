#include <iostream>
using namespace std;

int main() {
    float initial_balance=0, balance = 0,deposit_2 = 0,deposit_1= 0,withdrawal_2=0,withdrawal_1=0; 
    cout<<"Enter the total balance you have::";
    cin>>initial_balance;
    balance=initial_balance;
    cout<<"Enter the amount you want to deposit::";
    cin>>deposit_1; 
    balance += deposit_1;       
    cout<<"Enter the Amount you want to deposit::";
    cin>>deposit_2;    
    balance += deposit_2;          

    cout<<"Enter the Withdrawl amount::";
    cin>>withdrawal_1;
    balance -= withdrawal_1;       

    cout<<"Enter the second withdrawl amount::";
    cin>>withdrawal_2;
    balance -= withdrawal_2; 
    cout << "Final Account Balance: PKR " << balance << endl;
    cout << "Transaction Summary:" << endl;
    cout << "Initial Balance: PKR " <<initial_balance<<endl;
    cout << "After Deposit of PKR " << deposit_1 <<" Balance = PKR " << initial_balance + deposit_1 << endl;
    cout << "After Deposit of PKR " << deposit_2 <<" Balance = PKR " << initial_balance + deposit_1 + deposit_2 << endl;
    cout << "After Withdrawal of PKR " << withdrawal_1 <<" Balance = PKR " << initial_balance + deposit_1 + deposit_2 - withdrawal_1 << endl;
    cout << "After Withdrawal of PKR " << withdrawal_2 <<" Balance = PKR " << balance << endl;

    return 0;
}
