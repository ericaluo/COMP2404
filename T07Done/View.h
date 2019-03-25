#ifndef VIEW_H
#define VIEW_H
#include <string>
#include "Library.h"
using namespace std;
class View{
  public:
    int mainMenu();
    void readBook(int&, string&, string&, int&,char&);
    void print(Library&);
    void readBookType(char&);
};
#endif
