#include <NormalAccount.h>
#include <iostream>

using namespace std;

NormalAccount::NormalAccount(int a, int b, char * c, int d) : Account(a,b,c), InterRate(d)
{
}
 
void NormalAccount::Deposit(int a)
{
 Account::Deposit(a);
 Account::Deposit(Money*(InterRate/100.0));
}
 
void NormalAccount::ShowAccount() const
{
 Account::ShowAccount();
 cout<<"이자율 : "<<InterRate<<endl;
}
