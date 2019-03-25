#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include "Book.h"
#include "Array.h"
using namespace std;


class Library
{
    public:
     Library();
     void addBook(Book*);
     void print();
    private:
     Array arr;
};
#endif
