/*
The 'if statement' is ued to execute a block of code only if a certain condition is met.

#1. Syntax of if statement:
if (condition)
{
    [block of code to be executed if the condition is true]
}

#2. Syntax of if...else statement:
if (condition)
{
    [block of code to be executed if the condition is true]
}

else
{
    [block of code to be executed if the conditon is false]
}

#3. Syntax of if...else if...else statement
if (condition)
{
    [block of code to be executed if the first condition is true]
}

else if (condition)
{
    [block of statements to be executed if the second condition is true]
}

else
{
    [block of statements to be executed if all the conditions are false]
}

*/

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter any number: " << endl;
    cin >> number;
    if (number > 10)
    {
        cout << "The number is greater than 10.";
    }
    else if (number < 10)
    {
        cout << "The number is less than 10.";
    }
    else
    {
        cout << "The number is equal to 10";
    }
    return 0;
}