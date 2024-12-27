#include "LinkedList.h"
#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

int main() {

  LinkedList *myLinkedList = new LinkedList(1);
  myLinkedList->append(2);
  myLinkedList->append(3);
  myLinkedList->append(4);
  myLinkedList->deleteLast();
  myLinkedList->append(5);
  delete myLinkedList;

  return 0;
}
