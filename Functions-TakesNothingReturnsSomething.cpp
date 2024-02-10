// Takes nothing returns something
#include <iostream>
using namespace std;

int main()
{
  int add(void); // function declaration
  int sum;
  sum = add(); // function call
  cout << "Sum is " << sum << endl;
}

int add() // function definition
{
  int a, b, c;
  cout << "Enter two numbers" << endl;
  cin >> a >> b;
  c = a + b;
  return c; // return statement
}