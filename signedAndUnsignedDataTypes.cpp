/*
#Signed and Unsigned Types
    Except for bool ana the extended character types, the integral types may be signed or unsigned.

    #Signed
        -Represents negative or positive numbers (including zero)
        -The types:
        int, short, long and long long are all signed by default.

    #Unsigned
        -Represents only values greater than or equal to zero.
        -We obtain the corresponding unsigned type by adding unsigned to the type.
            E.g. unsigned long

    #Character Types
        Unlike the other integer types, there are three distinct basic charcater types:
            1. char
            2. signed char
            3. unsigned char

            Although there are three character types, there are only two representations:
                signed and unsigned

            The (plain) char type uses on of these representatiosn based on the compiler
*/

#include <iostream>
using namespace std;
int main()
{
    unsigned int num = -1; // an unsigned int cannot hold -1, so it converts it into its 32 bit binary format and then converts that to it's 2's complement and ultimately back to its decimal form outputting  the value 4294967295
    int x = num;
    cout << num << "," << x;
    return 0;
}

/*
unsigned int num = -1
int x = num;

-1----> the binary equivalent is converted to it's 2's complement
-1----> the binary euivalent in 32 bits format: 00000000000000000000000000000001

1's complement : 1111111111111111111111111111110
2's complemet : 1111111111111111111111111111110
                                             +1
                1111111111111111111111111111111  =   4294967295 in decimal



*/