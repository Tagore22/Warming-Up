#ifndef NormalAccount_123
#define NormalAccount_123
#include <Account.h>

class NormalAccount : public Account
{
 private:
 int InterRate;
 public:
 NormalAccount(int a, int b, char * c, int d);
 Virtual void Deposit(int a);
 Virtual void ShowAccount() const;
 };
 
 #endif
