// Takes something returns nothing
#include <iostream>
using namespace std;

int main()
{
  void add(int, int); // function declaration
  int x, y;
  cout << "enter two numbers: ";
  cin >> x >> y;
  add(x, y); // function call | actual arguments
  return 0;
}

void add(int a, int b) // function definition | formal arguments
{

  int c;
  c = a + b;
  cout << "sum is: " << c;
}