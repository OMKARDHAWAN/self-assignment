#include <iostream>
using namespace std;
int main(){
 int a,b,andResult,orResult,notResult;
 
 //logical operator
 
 cout << "Enter value of a : ";
 cin >> a;
 
 cout << "Enter value of b : " ;
 cin >> b;
 
 //Logical operator
 cout << "Logical Operator : " << "\n";
 //And operator;
 andResult = a && b;
 cout << "Result of AND operation between A and B: " << andResult << "\n" ;

 //OR operator;
 orResult = a || b;
 cout << "Result of OR operation between A and B : " << orResult << "\n";

 
 //NOT operator;
 notResult = !a;
 cout << "Result of NOT operation for value of A : " << notResult << "\n\n"; 


 cout << "Unary Operator : " << "\n";
 //Unary operator 
 
  //pre-inc
 ++a;
 cout << "Pre-inc Of a :" << a << "\n";
 //pre-dec
 --a;
 cout << "Pre-inc of a : " << a << "\n";
 //post-inc
 cout << "Post-inc of a : " << a << "\n";
 a++;
 //post-dec
 cout << "Post-inc of a : " << a << "\n";
 a--;
 //bitwise Not 
 !a;
 cout << "Result of bitwise a : " << a << "\n\n";
 
 
 
  cout << "Tenary Operator : " << "\n";
 //tenary operator
 string result = (a > b) ?  "a is greater than b" :  "a is less than b ";
 
 cout << "Result of Tenary operation between a and b : \t" << result << "\n\n";
 
 cout << "Assignment Operator : " << "\n";
 
 //Assignment operator 
   b += a;
   cout << b << "\n";  
 
   b -= a;
   cout << b << "\n";  

 
 return 0;
}