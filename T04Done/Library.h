#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include "Array.h"

class Library
{
	public:
	void print();
	void addBook(Book*);
	
	private:
	//Book inLibBook();
	Array bookArray;
};

#endif
