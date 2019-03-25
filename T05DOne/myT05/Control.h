#include <stdio.h>
#include <string>
#include"Library.h"
#include "View.h"
class Control{
public:
  void launch();
  
private:
  Library scs;
  Library lounge;
  View    view;
  int id, year, choose;
  string title, author;
  char type; // for determing the fictionBook

};
