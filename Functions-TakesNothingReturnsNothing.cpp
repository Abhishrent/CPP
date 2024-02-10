// Takes nothing returns nothing
#include <iostream>
using namespace std;

int main() // main function
{
  void add(void); // function declaration
  add();          // function call
  return 0;
}

void add() // function definition
{
  int a, b, c;
  cout << "Enter two numbers" << endl;
  cin >> a >> b;
  c = a + b;
  cout << "Sum is " << c << endl;
}
