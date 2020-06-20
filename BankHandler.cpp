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
