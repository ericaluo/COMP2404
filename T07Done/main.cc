#include <iostream>
using namespace std;
#include <string>

#include "Control.h"
#include "Book.h"
#include "Library.h"
#define MAX_ARR_SIZE  128

//int  mainMenu();
//void printLibrary(Book arr[MAX_ARR_SIZE], int num);


int main()
{
  Control c;
  c.launch();
//  Book   library[MAX_ARR_SIZE];
/*
  int    numBooks = 0;
  string title, author;
  int    id, year;
  int    menuSelection;

  //Library library =  Library();
  //View    view =  View();

  while (1) {
    menuSelection = view.mainMenu();

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
      Book* b =new Book(id,title,author,year);
      library.addBook(b);
      numBooks++;
    }
  }

  if (numBooks > 0)
    library.print();*/

  return 0;
}
/*
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

void printLibrary(Book arr[MAX_ARR_SIZE], int num)
{
  cout << endl << endl << "LIBRARY: " << endl;

  for (int i=0; i<num; ++i)
    arr[i].print();

  cout << endl;
}*/
