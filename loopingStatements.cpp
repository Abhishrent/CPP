// different looping statements to calculate the sum of the first 10 numbers
#include <iostream>
using namespace std;
int main()
{

    // for loop
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "The sum from 1 to 10 is: " << sum << endl;

    // while loop
    sum = 0;
    int counter = 1;
    while (counter <= 10)
    {
        sum = sum + counter;
        counter++;
    }
    cout << "The sum from 1 to 10 is: " << sum << endl;

    // do while loop
    sum = 0;
    counter = 1;
    do
    {
        sum = sum + counter;
        counter++;
    } while (counter <= 10);
    cout << "The sum from 1 to 10 is: " << sum << endl;

    return 0;
}
