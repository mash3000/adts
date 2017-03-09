#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
 int num_elements = 0;
 int data = 0;
 
 L1.insert(10,1);
 L1.insert(33,2);
 L1.insert(50,3);
 L1.insert(1212,1);
 L1.insert(500,4);
 L1.insert(3,3);
 num_elements = L1.size();
 cout << num_elements << endl;
 L1.remove(2);
 num_elements = L1.size();
 cout << num_elements << endl;
 data = L1.getAt(5);
 cout << data << endl;
 L1.clear();
 num_elements = L1.size();	
 cout << num_elements << endl;
 
 L2.insert(60,1);
 L2.insert(99,2);
 L2.insert(403,3);
 L2.insert(102,1);
 L2.insert(5,2);
 L2.insert(222,4);
 num_elements = L2.size();
 cout << num_elements << endl;
 L2.remove(2);
 num_elements = L2.size();
 cout << num_elements << endl;
 data = L2.getAt(5);
 cout << data << endl;
 L2.clear();
 num_elements = L2.size();
 cout << num_elements << endl;	
 
}
