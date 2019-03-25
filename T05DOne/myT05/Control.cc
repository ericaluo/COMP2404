#include <stdio.h>
#include <string>

#include"Control.h"
void Control:: launch(){
	choose = 1;
	while (choose == 1){
		view.mainMenu(choose);
		if (choose == 1){
			view.readBook(id,title,author,year);
			readBookType(type);
			if(type == 'y'){
				Fiction_Book* book = new Fiction_Book(id,title,author,year);
				lounge.addBook(book);
			}
		  else{
				Non_Fiction_Book* book = new Non_Fiction_Book(id,title,author,year);
				scs.addBook(book);
			}
		}
	}
	view.print(lounge);
	view.print(scs);
}
