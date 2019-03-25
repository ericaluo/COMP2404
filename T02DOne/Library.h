#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#define MAX_ARR_SIZE 128

class Library
{
	public:
	Library();
	void print();
	void addBook(Book&);
	
	private:
	//Book inLibBook();
	Book inLibBook[MAX_ARR_SIZE];
	int numOfBook;
};

#endif
