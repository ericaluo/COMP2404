#ifndef FICTION_BOOK_H
#define FICTION_BOOK_H
#include "Book.h"
#include <string>
using namespace std;

class Fiction_Book:public Book
{public:
  Fiction_Book(int=0, string="Unknown", string="Unknown", int=0);
};

#endif
