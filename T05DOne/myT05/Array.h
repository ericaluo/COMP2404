#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include "Book.h"
using namespace std;

#define MAX_ARR_SIZE  128

class Array
{
    public:
     Array();
     void add(Book*);
     void print();
     ~Array();

    private:
     Book *arr[MAX_ARR_SIZE];
     int size;
};

#endif
