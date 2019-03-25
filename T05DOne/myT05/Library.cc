#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"
#include "Library.h"
#include "Array.h"

Library::Library()
{
}

void Library::addBook(Book* i)
{
    arr.add(i);
}

void Library::print()
{
    arr.print();
}
