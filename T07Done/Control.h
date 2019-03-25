#include <stdio.h>
#include <string>
#include"Library.h"
#include "View.h"
using namespace std;

class Control{
public:
  void launch();
private:
  Library lounge;
  Library scs;
  View    view;
  int id, year, flag;
  string title, author;
  char type;

};
