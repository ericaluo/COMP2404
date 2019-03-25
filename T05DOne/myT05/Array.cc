#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"
#include "Array.h"

Array::Array()
{
    size = 0;
}
Array::~Array(){
  for(int i = 0; i<size;i++)
    delete arr[i];
}

void Array::add(Book* b)
{   int index = size;
    for (int j = 0;j < size;j++){
        if (b->lessThan(arr[j])){
            index = j;
            for (int m = size;m > j;m--) {
                arr[m] = arr[m-1];
            }
            break;
        }
    }
    arr[index] = b;
    ++size;
}

void Array::print()
{
    for (int a=0;a<size;a++){
        arr[a]->print();
    }
}
