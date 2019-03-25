#include <stdio.h>
#include <string>
#include"Control.h"
#include "Fiction_Book.h"
#include "Non_Fiction_Book.h"
#include <iostream>
using namespace std;

void Control:: launch(){

  while (flag){
      flag = view.mainMenu();
      if (flag){
        view.readBook(id,  title, author,year, type);
        if(type =='y'){
          Fiction_Book* book = new Fiction_Book(id,title,author,year);
          lounge.addBook(book);
        }
        else {
          Non_Fiction_Book* book = new Non_Fiction_Book(id,title,author,year);
          scs.addBook(book);
        }
      }
  }
  std::cout<< "scs Library:" <<endl;
  view.print(scs);
  std::cout<< "lounge Library:" <<endl;
  view.print(lounge);
}
