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
 

 
#endif
 
