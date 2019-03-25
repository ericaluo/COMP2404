#include <iostream>
using namespace std;
#include "Array.h"

Array::Array()
{ 
	size = 0;
}

Array::~Array()
{
	for(int i=0;i<size;++i){
		delete elements[i];
	}
}

void Array::print()
{
	if (size == 0){
		cout << "There is no book in Array." << endl;
	}
	else{
		for(int i=0;i<size;++i){
			elements[i]->print();
		}
	}
}

void Array::add(Book* newBook)
{
	//int for record the position
	int i;
	if(size ==0){
		elements[size] = newBook;
		++size;
	}
	else if (size ==1){
		if(elements[0]->lessThan(newBook)){
			elements[size] = newBook;
			++size;
		}
		else{
			Book* temp = elements[0];
			elements[0] = newBook;
			elements[1] = temp;
			++size;
		}
	}
	else{
		for(i=0;i<size;++i){
			if(!(elements[0]->lessThan(newBook))){
				break;
			}
			else{
				continue;
			}
		}
		for(int j=size;j>=i;j--){
			elements[j+1] = elements[j];
		}
		elements[i] = newBook;
		++size;
	}
}

