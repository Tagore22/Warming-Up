#include <Account.h>
#include <iostream>
#include <cstring>
 

using namespace std;

Account::Account(int a, int b, char * c) : ID(a), Money(b)
{
  Name = new char[strlen(c)+1];
  strcpy(Name, c);
}

Account::~Account()
{
 delete []Name;
}

void Account::Deposit(int a)
{
 Money += a;
}

int Account::WithDraw(int a)
{
 if(Money < a)
  return -1;
 else
 {
  Money -= a;
  return Money;
 }
}

int Account::GetID() const
{
 return ID;
}

void Account::ShowAccount() const
{
 cout<<"계좌번호 : "<<ID<<endl;
 cout<<"잔 액 : "<<Money<<endl;
 cout<<"예금주 : "<<Name<<endl;
}
 
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
  
