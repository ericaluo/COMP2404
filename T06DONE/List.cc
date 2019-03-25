#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"
#include "List.h"

List::List()
{
    head = NULL;
}
List::~List(){
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}


void List::add(Book* stu){
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = stu;
  tmpNode->next = NULL;
  tmpNode->prev = NULL;

  currNode = head;
  prevNode = NULL;


  while (currNode != NULL) {
    if (!(currNode->data)->lessThan(stu))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

//head
  if (prevNode == NULL) {
    
    head = tmpNode;
  }else {
    prevNode->next = tmpNode;
  }

  if (currNode != NULL) {
      currNode->prev = tmpNode;
      tmpNode->prev = prevNode;
  }

  tmpNode->next = currNode;
}

void List::print(){
  Node* currNode = head;
  Node* prevNode = NULL;
  while (currNode != NULL) {
    currNode->data->print();
    prevNode = currNode;
    currNode = currNode->next;
  }
  cout << "Finish typing from head to tail" << endl;
  currNode = prevNode;
  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->prev;
  }
}
