#include <iostream>
#include <iomanip>
using namespace std;
#include "Control.h"
#include "View.h"
#include "Library.h"

void View:: mainMenu(int& choose){

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

 // while (selection < 0 || selection > numOptions) {
  cout << "Enter your selection: ";
  cin >> choose;
  
}

void View:: readBook(int& id, string& title, string& author, int& year){
  cout << "id:  ";
  cin  >> id;
  cout << "title:   ";
  cin.ignore();
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year:  ";
  cin  >> year;
}

void View:: print(Library& l){
    l.print();
}
