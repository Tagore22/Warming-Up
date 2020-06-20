#ifdef Bank_123
#define Bank_123
#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

class Account
{
private:
 int ID;
 int Money;
 char * Name;
public:
 Bank();
 Bank(int a, int b, char * c);
 ~Bank();
 void SetMoney(int a);
 int GetMoney() const;
 void GetAccount() const;
 void ShowBank() const;
};
 
Bank::Bank()
{
};
 
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
 
#endif
 
