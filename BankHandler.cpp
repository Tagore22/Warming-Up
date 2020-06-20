#include <BankHandler.h>
#include <iostream>
#include <cstring>

using namespace std;

void BankHandler::ShowMenu() const
{
 cout<<"1. 계좌생성"<<endl;
 cout<<"2. 계좌입금"<<endl;
 cout<<"3. 계좌출금"<<endl;
 cout<<"4. 전체계좌조회"<<endl;
 cout<<"5. 프로그램 종료"<<endl;
}

void BankHandler::MakeAccount()
{
 int KindAccount;
 
 cout<<"계좌생성"<<endl;
 cout<<"1. 일반계좌생성"<<endl;
 cout<<"2. 특별계좌생성"<<endl;
 cout<<"선택 : ";
 cin>>KindAccount;
 
 switch(KindAccount)
 {
  case 1 :
   MakeNormalAccount();
   break;
  case 2 :
   MakeHighAccount();
   break;
 }
}

void BankHandler::MinusMoney()
{
  int NewID;
  int NewMoney;
  int BankAcc = -1;
  
  cout<<"계좌출금"<<endl;
  while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>NewID;
  for(int i = 0; i < HandlerNum; i++)
   {
    if(Handler[i].GetID() == NewID)
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
  while(1)
  {
  cout<<"입금액 입력";
  cin>>NewMoney;
  if(NewMoney < 0)
   {
     cout<<"잘못된 금액 입력!"<<endl;
     coutinue;
   }
   else
    break;
  }
  Handler[BackAcc].WithDraw(Newmoney);
  cout<<"계좌입금 완료!"<<endl;
  }

void BankHandler::ShowAll() const
{
  for(int i = 0; i < HandlerNum; i++)
    Hanlder[i].ShowAccount();
}

void BankHandler::MakeNormalAccount()
{
 int NewID;
 int NewMoney;
 char NewName[100];
 bool jungbok = false;
 int Rate;

 cout<<"계좌생성"<<endl;
 while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>NewID;
  for(int i = 0; i < HandlerNum; i++)
   {
    if(Handler[i].GetID() == NewID)
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
 cout<<"이자율 입력 : ";
 cin>>Rate;
 
 Handler[HandlerNum++] = new NormalAccount(NewID, NewMoney, NewName, Rate);
 
 cout<<"일반계좌생성 완료!"<<endl;
}

void BankHandler::MakeHighAccount()
{
 int NewID;
 int NewMoney;
 char NewName[100];
 bool jungbok = false;
 int Rate;
 int SpecialRate;

 cout<<"계좌생성"<<endl;
 while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>NewID;
  for(int i = 0; i < HandlerNum; i++)
   {
    if(Handler[i].GetID() == NewID)
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
 cout<<"이자율 입력 : ";
 cin>>Rate;
 cout<<"특별이자율 입력 : ";
 cin>>SpecialRate;
 
 Handler[HandlerNum++] = new HighCreditAccount(NewID, NewMoney, NewName, Rate, SpecialRate);
 
 cout<<"계좌생성 완료!"<<endl;
}
