#ifndef LIST_H
#define LIST_H

#include <string>
#include "Book.h"
using namespace std;

#define MAX_ARR_SIZE  128

class List
{
  class Node
  {
    friend class List;
  private:
    Book* data;
    Node* next;
    Node* prev;
  };
    public:
     List();
     ~List();
     void add(Book*);
     void print();

    private:
     Node *head;
};

#endif
