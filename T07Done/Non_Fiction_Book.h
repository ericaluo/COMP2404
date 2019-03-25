#ifndef NON_FICTION_BOOK_H
#define NON_FICTION_BOOK_H
#include "Book.h"
#include <string>
using namespace std;

class Non_Fiction_Book:public Book
{public:
Non_Fiction_Book(int=0, string="Unknown", string="Unknown", int=0);
};

#endif
