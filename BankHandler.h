#ifndef BankHandler_123
#define BankHandler_123
#include <Account.h>

class BankHandler
{
  Account * Handler[100];
  int HandlerNum;
 public :
  BankHandler();
  ~BankHandler();
  void ShowMenu() const;
  void MakeAccount();
  void PlusMoney();
  void MinusMoney();
  void ShowAll() const;
  void MakeNormalAccount();
  void MakeHighAccount();
};
  
#endif


