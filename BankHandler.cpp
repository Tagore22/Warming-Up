#include <BankHandler.h>
#include <iostream>
#include <cstring>

using namespace std;



Account * Handler[100];
  int HandlerNum;
 public :
  BankHandler();
  ~BankHandler();
  void ShowMenu() const;
  void MakeBank();
  void PlusMoney();
  void MinusMoney();
  void ShowAll() const;

void BankHandler::ShowMenu() const
{
 cout<<"1. 계좌생성"<<endl;
 cout<<"2. 계좌입금"<<endl;
 cout<<"3. 계좌출금"<<endl;
 cout<<"4. 전체계좌조회"<<endl;
 cout<<"5. 프로그램 종료"<<endl;
}

void BankHandler::MakeBank()
{
 int NewID;
 int NewMoney;
 char NewName[100];
 bool jungbok = false;

 cout<<"계좌생성"<<endl;
 while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>NewID;
  for(int i = 0; i < HandlerNum; i++)
   {
    if(Handler[i].ID == NewID)
     {
      jungbok = true;
      break;
     }
    }
   if(jungbok)
   {
    cout<<"계좌중복생성 불가!"<<endl;
    continue;
   }
   else
   break;
  }
 cout<<"입금액 입력 :";
 cin>>NewMoney;
 cout<<"이름 입력 :";
 cin>>NewName;
 
 Handler[HandlerNum++] = new Account(NewID, NewMoney, NewName);
 
 cout<<"계좌생성 완료!"<<endl;
 }
 
 void BankHandler::PlusMoney()
 {
  int NewID;
  int NewMoney;
  int BankAcc = -1;
  
  cout<<"계좌입금"<<endl;
  while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>NewID;
  for(int i = 0; i < HandlerNum; i++)
   {
    if(Handler[i].ID == NewID)
     {
      BankAcc = i;
      break;
     }
    }
   if(BankAcc = -1)
   {
    cout<<"잘못된 계좌번호 입력!"<<endl;
    continue;
   }
   else
   break;
  }
  cout<<"입금액 입력";
  cin>>NewMoney;
  Handler[BackAcc].SetMoney(Newmoney);
  cout<<"계좌입금 완료!"<<endl;
  }
