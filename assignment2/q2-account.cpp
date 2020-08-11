#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
    Account(int);
    void credit(int );
    void debit(int );
    int getAccountBalance();

private:
    int accountBalance;
};
Account::Account(int balance)
{
    if(balance>=0)
        accountBalance=balance;
    else
    {
        accountBalance=0;
        cout<<"initial balance was invalid."<<endl;
    }
}
void Account::credit(int balance)
{
    accountBalance=accountBalance+balance;
}
void Account::debit(int balance)
{
    if(accountBalance>=balance)
    {
        accountBalance=accountBalance-balance;
    }
    else
    {
        cout<<"Debit amount exceeded account balance"<<endl;
    }
}
int Account::getAccountBalance()
{
    return accountBalance;
}
int main()
{
    Account Account1(89);
    Account Account2(-76);
    cout<<"account 1's initial balance is : "<<Account1.getAccountBalance()<<endl;
    cout<<"\naccount 2's initial balance is : "<<Account2.getAccountBalance()<<endl;
    Account1.credit(200);
    Account2.credit(34);
    cout<<"\nAccount 1's balance is : "<<Account1.getAccountBalance()<<endl;
    cout<<"\nAccount 2's balance is : "<<Account2.getAccountBalance()<<endl;
    Account1.debit(50);
    Account2.debit(34);
    cout<<"\nAccount 1's balance is : "<<Account1.getAccountBalance()<<endl;
    cout<<"\nAccount 2's balance is : "<<Account2.getAccountBalance()<<endl;
}
