/*
A pointer is a variable that stores the address of another variable.
Like any variable or constant, you must declare a pointer before you can use it to store any variable address.
A pointer points to a variable of the same data type only.

A pointer variable is declared like other variables, with the data type followed by an asterisk (*) and the variable name.
For example: int *x;
Here, x is a pointer variable that can store the address of an integer variable.

*/

#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  cout << "The value stored in variable x is: " << x << endl;                                                                       // x is the value stored in variable x
  cout << "The address of variable x i.e &x  is: " << &x << endl;                                                                   // &x is the address of variable x | referencing
  cout << "The value of the variable associated to that address / the indirection of address of x i.e *(&x) is: " << *(&x) << endl; // *(&x) is the variable associated with the address | dereferencing

  int *p = &x;                                                                               // p is a pointer to the address of x
  cout << "The value stored in pointer p is: " << p << " which is the address of x" << endl; // p is the value stored in pointer p
  cout << "The address of pointer p is: " << &p << endl;                                     // &p is the address of pointer p
  return 0;
}
