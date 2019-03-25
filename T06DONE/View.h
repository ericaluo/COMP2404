#ifndef VIEW_H
#define VIEW_H
#include <string>
#include "Library.h"
using namespace std;
class View{
  public:
    int mainMenu();
    void readBook(Library&);
    void print(Library&);

};
#endif
