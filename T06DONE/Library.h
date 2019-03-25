#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include "Book.h"
#include "List.h"
using namespace std;


class Library
{
    public:
     Library();
     void addBook(Book*);
     void print();
    private:
     List list;
};
#endif
