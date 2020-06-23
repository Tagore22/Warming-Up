#include <Account.h>
#include <NormalAccount.h>
#include <HighCreditAccount.h>
#include <BankHandler.h>
#include <iostream>
#include <cstring> 


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
 int MenuNum; 
 
 while(1)
 {
  Handle.ShowMenu();
  cout<<"메뉴 선택 :"<<cin<<MenuNum;
  
  switch(MenuNum)
  {
   case Menu::MakeBank:
    Handle.MakeBank();
    break;
   case Menu::PlusMoney:
    Handle.PlusMoney();
    break;
   case Menu::MinusMoney:
    Handle.MinusMoney();
    break;
   case Menu::ShowAll:
    Handle.ShowAll();
    break;
   case Menu::ProgramEnd:
    return 0;
   default:
    cout<<"잘못된 숫자 입력"<<endl;
   }
  }
  return 0;
}


 
 
