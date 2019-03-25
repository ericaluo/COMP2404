#include <iostream>
using namespace std;
#include <string>
#include "Book.h"
// #include "Array.h"
#include "Library.h"
#define MAX_ARR_SIZE  128

int  mainMenu();

int main()
{
  Library  theLib;
  int    menuSelection;
  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
      break;
    else if (menuSelection == 1) {
	  theLib.add();
    }
  }

  theLib.print();
 
  return 0;
}

int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}


