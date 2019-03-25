#include <iostream>
using namespace std;
#include "Array.h"

Array::Array()
{
	Book elements[MAX_ARR_SIZE];
	size = 0;
}

void Array::print()
{
	if (size == 0){
		cout << "There is no book in Array." << endl;
	}
	else{
		for(int i=0;i<size;i++){
			elements[i].print();
		}
	}
}

void Array::add(Book& newBook)
{
	if (size < MAX_ARR_SIZE){
		elements[size] = newBook;
		size=size+1;
	}
	else{
		cout << "Array is full" << endl;
	}
}
