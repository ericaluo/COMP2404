#include <iostream>
using namespace std;
#include <string>

#include "Book.h"
#include "Library.h"


int  mainMenu();
//void printLibrary(Library bookLib, int num);

int main()
{
 // Book   library[MAX_ARR_SIZE];
  Library bookLib;
  int    numBooks = 0;
  string title, author;
  int    id, year;
  int    menuSelection;

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

      Book aLibBook(id, title, author, year);
      bookLib.addBook(aLibBook);
      ++numBooks;
    }
  }

  if (numBooks > 0)
	  bookLib.print();
// printLibrary(library, numBooks);
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

// void printLibrary(Book arr[MAX_ARR_SIZE], int num)
// {
  // cout << endl << endl << "LIBRARY: " << endl;

  // for (int i=0; i<num; ++i)
    // arr[i].print();

  // cout << endl;
// }

