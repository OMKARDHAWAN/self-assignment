#include <iostream>
using namespace std;

void recievePointer(int* );

int main(){
 
 int a = 10;
 
 int* ptr ;
 ptr = &a ;
 
 cout << "value of pointer " << ptr << "\n"; 
 recievePointer(ptr); 
 return 0;
}

void recievePointer(int* r_ptr){
 
 cout << "value of pointer " << r_ptr << "\n"; 
 cout << "value of a : " << *r_ptr;
}
