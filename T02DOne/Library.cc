#include <iostream>
using namespace std;
#include "Library.h"


Library::Library()
{
	cout << "Now in the library" << endl;
	Book inLibBook[MAX_ARR_SIZE];
	numOfBook = 0;
}

void Library::print()
{
	for(int i=0;i<numOfBook;i++){
		inLibBook[i].print();
	}
}

void Library::addBook(Book& newBook)
{
	if (numOfBook+1<=MAX_ARR_SIZE){
		inLibBook[numOfBook] = newBook;
		numOfBook=numOfBook+1;
	}
	else{
		cout << "Library is full" << endl;
	}
}


