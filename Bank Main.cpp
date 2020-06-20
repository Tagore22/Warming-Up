#include <Account.h>
#include <BankHandler.h>
#include <iostream>
#include <cstring> 

#define Bank_len 100

namespace Menu
{
 MakeBank = 1;
 PlusMoney = 2;
 MinusMoney = 3;
 ShowAll = 4;
 ProgramEnd = 5;
};

using namespace std;

int main()
{
 BankHandler Handle;
 int num = 0;
 int MenuNum; 
 
 while(1)
 {
  ShowMenu();
  cout<<"메뉴 선택 :"<<cin<<MenuNum;
  
  switch(MenuNum)
  {
   case MakeBank:
    void MakeBank();
    break;
   case PlusMoney:
    void PlusMoney();
    break;
   case MinusMoney:
    void MinusMoney();
    break;
   case ShowAll:
    void ShowAll();
    break;
   case ProgramEnd:
    for(int i = 0; i < MenuNum; i++)
     delete [i];
    return 0;
   default:
    cout<<"잘못된 숫자 입력"<<endl;
   }
  }
  return 0;
 }

void ShowMenu()
{
 cout<<"1. 계좌생성"<<endl;
 cout<<"2. 계좌입금"<<endl;
 cout<<"3. 계좌출금"<<endl;
 cout<<"4. 전체계좌조회"<<endl;
 cout<<"5. 프로그램 종료"<<endl;
}

void MakeBank()
{
 int Acc;
 int Mon
 char Na[100];
 bool jungbok = false;

 cout<<"계좌생성"<<endl;
 while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>Acc;
  for(int i = 0; i < num; i++)
   {
    if(Banks[i].Account == Acc)
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
 cin>>Mon;
 cout<<"이름 입력 :";
 cin>>Na;
 
 Banks[num++] = new Bank(Acc, Mon, Na);
 
 cout<<"계좌생성 완료!"<<endl;
 }
 
 void PlusMoney()
 {
  int Acc;
  int Mon;
  int BankAcc = -1;
  
  cout<<"계좌입금"<<endl;
  while(1)
 {
  cout<<"계좌번호 입력 :";
  cin>>Acc;
  for(int i = 0; i < num; i++)
   {
    if(Banks[i].Account == Acc)
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
  cin>>Mon;
  Banks[BackAcc].SetMoney(mon);
  cout<<"계좌입금 완료!"<<endl;
  }
  
  
 
 
 
