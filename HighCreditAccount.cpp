#include <iostream>
#include <HighCreditAccount.h>

using namespace std;

HighCreditAccount(int a, int b, char * c, int d, int e) : NormalAccount(a,b,c,d), SpecialRate(e)
{
}
 
void HighCreditAccount::Deposit(int a)
{
 NormalAccount::Deposit(a);
 Account::Deposit(Money*(SpecialRate/100.0));
}
 
void HighCreditAccount::ShowAll() const
{
 NormalAccount::ShowAll();
 cout<<"특별이자율 : "<<SpecialRate<<endl;
}
