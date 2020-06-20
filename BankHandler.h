#ifndef BankHandler_123
#define BankHandler_123
#include <Bank.h>

class BankHandler
{
 Bank

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
