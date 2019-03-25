#ifndef VIEW_H
#define VIEW_H
#include <string>
#include "Library.h"
using namespace std;
class View{
  public:
    void mainMenu(int& choose);
    void readBook(int& id, string& title, string& author, int& year);
    void print(Library&);

};
#endif
