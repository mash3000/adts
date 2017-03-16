#include "StackL.h"
using namespace std;

int Stack::size(){
	return data.size();
}

void Stack::push(int k){
	data.insert(k,1);	
}

void Stack::pop(){
	if(data.size() > 0)	
	data.remove(1);
}

int Stack::top(){
	return data.getAt(1);
}

void Stack::clear(){
	if(data.size() > 0)
	data.clear();
}

