// Takes something returns something
#include <iostream>
using namespace std;

int main()
{
  int add(int, int); // function declaration
  int x, y, sum;
  cout << "Enter two numbers: ";
  cin >> x >> y;
  sum = add(x, y); // function call | actual arguments
  cout << "Sum of the two numbers is: " << sum;
}

int add(int a, int b) // function definition | formal arguments
{
  int c;
  c = a + b;
  return (c); // return statement
}