#include <stdio.h>
#include <string>

#include"Control.h"
void Control:: launch(){

  bool flag = true;
  while (flag){
      flag = view.mainMenu();
      if (flag){
          view.readBook(library);
      }
  }
  view.print(library);
}
