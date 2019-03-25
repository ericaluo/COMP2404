#include <iostream>
using namespace std;
#include "Library.h"


Library::Library()
{
	Array bookArray;
}

void Library::print()
{
	cout << endl << endl << "LIBRARY: " << endl;
	bookArray.print();
}

void Library::add()
{
	string title, author;
	int    id, year;
	
	cout << "id:  ";
	cin  >> id;
	cout << "title:   ";
	cin.ignore();
	getline(cin, title);
	cout << "author: ";
	getline(cin, author);
	cout << "year:  ";
	cin  >> year;
	
	Book newBook(id, title, author, year);
	bookArray.add(newBook);
}


