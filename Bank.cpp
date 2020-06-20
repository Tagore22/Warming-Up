#include <Bank.h>
#include <iostream>
#include <cstring>

using namespace std;

Bank::Bank(int a, int b, char * c) : ID(a), Money(b)
{
  Name = new char[strlen(c)+1];
  strcpy(Name, c);
}

Bank::~Bank()
{
 delete []Name;
}

void Bank::SetMoney(int a)
{
 Money += a;
}

int Bank::GetMoney() const
{
 return Money;
}

void Bank::GetAccount() const
{
 return ID;
}

void Bank::ShowBank() const
{
 cout<<"계좌번호 : "<<ID<<endl;
 cout<<"잔 액 : "<<Money<<endl;
 cout<<"예금주 : "<<Name<<endl;
}
