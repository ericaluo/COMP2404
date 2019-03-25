#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include "Array.h"

class Library
{
	public:
	Library();
	void print();
	void add();
	
	private:
	//Book inLibBook();
	Array bookArray;
	string title, author;
	int    id, year;
};

#endif
