/*
#Type Conversions
    Type of an object defines the data that an ovject might contain and what operations that object can perform.

One of the operations supported by many types is the ability to convert objects of the given type to other, related types.

When do type conversions occur?
    -Type conversions happen automatically when we use an object of one type where an object of another type is expected.

Let us see what happens when we assign a value of one type to an object of another type.

#Assigning one arithmetic type to another
----------------------------------------------------------------------
bool b = 35;  //assigning an integer value to a boolean type
int i = b;    //assigning a boolean value to an integer type
i = 3.14;     //assigning a floating point value to an integer type
double pi = i;
unsigned character c = -1;
----------------------------------------------------------------------

*/

#include <iostream>
using namespace std;
int main()
{
    // overview
    cout << "#Assigning one arithmetic type to another" << endl
         << "-------------------------------------------------------------" << endl
         << "bool b = 35;  (assigning an integer value to a boolean type)" << endl
         << "int i = b;    (assigning a boolean value to an integer type)" << endl
         << "i = 3.14;     (assigning a floating point value to an integer type)" << endl
         << "double pi = i;   (assigning an integer value to a floating point type)" << endl
         << "unsigned character c = -1;  (assigning a signed character to an unsigned character type)" << endl
         << "-------------------------------------------------------------" << endl
         << endl;

    // actual code
    bool b = 35;
    cout << "b = " << b << " since when we assign a non bool arithmetic type to a bool object, the result is: false if the value is 0 and true otherwise." << endl;
    int i = b;
    cout << "i = " << i << " since when we assign a bool to one of the other arithmetic types, the resulting value is: 1 if the bool is true and 0 if the bool is false." << endl;
    i = 3.14;
    cout << "i = " << i << " since when we assign a floating point value to an object of integral type, the value is truncated. The value that is stored is the part before the decimal." << endl;
    double pi = i;
    cout << "pi = " << pi << " since when we assign an integral value to an object of floating point type, the fractional part is zero." << endl;
    unsigned char c = -1;
    cout << "c = " << c << "(blank character)"
         << " since -1 is converted as follows: -1>its binary equivalent 8 bit form>its 2's complement>back to its decimal form i.e 255, which corresponds to a blank character in ASCII. " << endl;

    return 0;
}