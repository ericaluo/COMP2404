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
void View::readBookType(char& type){
  cout << "Is it a fiction book or not? (y/n)";
  cin >> type;

}
void View:: readBook(int& id, string& title, string& author,int& year,char& type){
 // int id, year;
 // string title, author;
 // char type;
  cout << "id:  ";
  cin  >> id;
  cout << "title:   ";
  cin.ignore();
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year:  ";
  cin  >> year;
  readBookType(type);
}
void View:: print(Library& l){

    l.print();
}
