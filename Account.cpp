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

void Account::SetMoney(int a)
{
 Money += a;
}

int Account::GetMoney() const
{
 return Money;
}

void Account::GetID() const
{
 return ID;
}

void Account::ShowAccount() const
{
 cout<<"계좌번호 : "<<ID<<endl;
 cout<<"잔 액 : "<<Money<<endl;
 cout<<"예금주 : "<<Name<<endl;
}
