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
 Virtual void Deposit(int a); //입금 함수. 계좌의 신용도마다 이자가 다르기에 입금시에 추가 이자를 함께 입금하여 구현.
 int WithDraw(int a); //출금 함수.
 void GetID() const;
 Virtual void ShowAccount() const;
};

#endif
 
