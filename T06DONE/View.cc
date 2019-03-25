#include <iostream>
#include <iomanip>
using namespace std;
#include "Control.h"
#include "View.h"
#include "Library.h"

int View:: mainMenu(){
  int numOptions = 1;
  int selection = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
      cout << "Enter your selection: ";
      cin >> selection;
  }
  if (selection == 1){
      return true;
  }
  else {
      return false;
  }
}

void View:: readBook(Library& l){
  int id, year;
  string title, author;
  cout << "id:  ";
  cin  >> id;
  cout << "title:   ";
  cin.ignore();
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year:  ";
  cin  >> year;
  Book* book = new Book(id,title,author,year);
  l.addBook(book);

}
void View:: print(Library& l){
    l.print();
}
