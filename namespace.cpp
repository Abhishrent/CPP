/*
Namespace: A namespace is a declarative region that provides a scope to the identifiers inside it.

Identifiers: The names of types, functions variables, etc.

Namespace are used to organize code into logical groups and to prevent name collisions that can occur especially when the code base includes multiple libraries.

#The Standard Namespace

Example:
--------------------------------------------------
#include <iostream>
int main()
{
    std::cout<<"Enter any number: ";<<std::endl;        //std stands for the standard library.
    int n1=0;
    std::cin>>n1;
    std::cout<<"The entered number is: "<<n1;
    return 0;

}
---------------------------------------------------

Notice that we used std::cin and std::cout instead of simply cin or cout*

The prefix std:: indicates that the names cout and cin are defined inside the namespace named std.

:: is called the scope operator

#Namespace Using Declarations

A "using" declaration lets us use a name from a namepace without qualifying the name with a namespace_name::prefix.
Syntax: using namespace::name;

Example:
---------------------------------------------------
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    cout<<"Enter any number: ";<<endl;
    int n1=0;
    cin>>n1;
    cout<<"The entered number is: "<<n1;
    return 0;

}
---------------------------------------------------

OR

#using namespace std
---------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter any number: ";<<endl;
    int n1=0;
    cin>>n1;
    cout<<"The entered number is: "<<n1;
    return 0;

}



---------------------------------------------------



*/