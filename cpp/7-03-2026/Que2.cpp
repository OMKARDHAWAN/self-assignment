#include <iostream>
using namespace std;


void swap(int& , int&);

int main(){
//Assingment no 2
//declare function and call by reference;


 int a = 10;
 int b = 20;
 
 
  cout << "Value of a before swapping : " << a << "\n";
  cout << "Value of b before swapping : " << b << "\n";
  
   swap(a,b); 
   cout << "Value of a after calling swapping function : " << a << "\n";
   cout << "Value of b after calling swapping function : " << b << "\n";
 
   
 return 0;
}
 
 
void swap(int& p, int& q){
  int temp;
  temp = p;
  p = q;
  q = temp; 
  
    cout << "Value of p after swapping : " << p << "\n";
	cout << "Value of q after swapping : " << q << "\n";
 }; 