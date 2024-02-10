/*

cout is used to display output to the user
cin is used to get input from the user
endl is used to end the line
>> is called the stream extraction operator, it is used to get input from the user
<< is called the stream insertion operator, it is used to display output to the user

*/

#include <iostream>
using namespace std;

int main()
{
  int number; // This is a variable that can store an integer
  cout << "This gives an output" << endl;
  cout << "This can be used to to let the user know when an input is expected" << endl;
  cout << "For example, to let the user know that the program requires them to input a number, we could say..." << endl;
  cout << "Enter any number" << endl;
  cin >> number;                             // cin is used to get input from the user and store it in a variabe
  cout << "You entered: " << number << endl; // cout is used to display output to the user

  //   You can also concatenate strings using the << operator
  cout << "You can concatenate strings using the << operator" << endl;
  cout << "For example, you can concatenate the string 'Hello' with the string 'World' to get 'Hello World' like this: " << endl;
  cout << "Hello"
       << " World" << endl;
}