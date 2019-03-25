#include <stdio.h>
#include <string>
#include"Library.h"
#include "View.h"
class Control{
public:
  void launch();
private:
  Library library;
  View    view;

};
