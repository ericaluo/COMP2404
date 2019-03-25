#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"
#include "Library.h"
#include "List.h"

Library::Library()
{
}

void Library::addBook(Book* i)
{
    list.add(i);
}

void Library::print()
{
    list.print();
}
