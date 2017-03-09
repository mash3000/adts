#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
using namespace std;

#ifndef LIST_H
#define LIST_H

class List //begin List definition 
{
  private:
    class Node;//forward declaration (defined in the implementation file)
    
    Node* frontPtr = nullptr;
    int num_elements = 0;
    
  public:
     ~List();//destructor
     void insert(int element, int k);//insert element at location k
     void remove(int k);//remove element at location k
     int size();//return the number of elements in the List
     
     void clear();//clear list
     int getAt(int k);//return a value from a node at location k
     

};//end List definition

#endif
