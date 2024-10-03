#include<iostream>
using namespace std; 

// Template function works for all data types, including user-defined types if '>' is overloaded
template <typename T> 
T myMax(T x, T y) 
{ 
   return (x > y) ? x : y; 
} 

int main() 
{ 
  // Type deduction allows us to omit explicit template arguments
  cout << myMax(3, 7) << endl;       // Call myMax for int
  cout << myMax(3.0, 7.0) << endl;   // Call myMax for double
  cout << myMax('g', 'e') << endl;   // Call myMax for char
  
  return 0; 
} 
