#ifndef HighCreditAccount_123
#define HighCreditAccount_123
#include <NormalAccount.h>


class HighCreditAccount : public NormalAccount
{
 Private:
 int SpecialRate;
 public:
 HighCreditAccount(int a, int b, char * c, int d, int e);
 Virtual void Deposit(int a);
 Virtual void ShowAccount() const;
 };
 
 #endif
