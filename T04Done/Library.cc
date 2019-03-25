#include <iostream>
using namespace std;
#include "Library.h"


void Library::print()
{
	cout << endl << endl << "LIBRARY: " << endl;
	bookArray.print();
}

void Library::addBook(Book* newBook)
{
	
	bookArray.add(newBook);
}


