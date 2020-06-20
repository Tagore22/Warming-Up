#ifndef Account_123
#define Account_123

class Account
{
private:
 int ID;
 int Money;
 char * Name;
public:
 Account(int a, int b, char * c);
 ~Account();
 Virtual void SetMoney(int a);
 int GetMoney() const;
 void GetID() const;
 Virtual void ShowAccount() const;
};
 
 
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
 
#endif
 
