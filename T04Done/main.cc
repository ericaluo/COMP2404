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
  int      menuSelection;
  string   title, author;
  int      id, year;
  Book*    addedbooks;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
      break;
    else if (menuSelection == 1) {
	 
	cout << "id:  ";
	cin  >> id;
	cout << "title:   ";
	cin.ignore();
	getline(cin, title);
	cout << "author: ";
	getline(cin, author);
	cout << "year:  ";
	cin  >> year;
	
	addedbooks = new Book(id, title, author, year);
	theLib.addBook(addedbooks);
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


