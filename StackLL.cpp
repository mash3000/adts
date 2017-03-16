#include "StackLL.h"
#include <iostream>
using namespace std;

class Stack::Node{
public:
	int data = 0;
	Node* link = nullptr;	
};

int Stack::size(){
	return num_elements;
}

void Stack::push(int k){
	Node* newPtr = new Node{k};
	if(num_elements == 0)
		frontPtr = newPtr;
	else {	
		Node* tmpPtr = frontPtr;
		for(int i = 1;i < num_elements;i++){
			tmpPtr = tmpPtr->link;
		}
		tmpPtr->link = newPtr;
	     }			
	num_elements++;
}

void Stack::pop(){
	if(num_elements == 0)
		cout << "Stack is already empty!"<< endl;
	else {	
		Node* delPtr = frontPtr;
		Node* prevPtr = frontPtr;	
	
		for(int i = 1;i < num_elements;i++){
			prevPtr = prevPtr->link;
		}
		delete prevPtr;
		num_elements--;
  	      }	     	
}


int Stack::top(){
	if(num_elements == 0)
		cout << "Stack is empty!" << endl;
	else {	
		Node* tmpPtr = frontPtr;
		for(int i = 1; i < num_elements;i++){
			tmpPtr = tmpPtr->link;
		}
	     	return tmpPtr->data;     
	     }		
	return 0;
}

void Stack::clear(){
	while(num_elements != 0){
		pop();
	}
}

Stack::~Stack(){
	clear();
}

