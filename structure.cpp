#include <iostream>
using namespace std;

struct date
{            // defining a structure and creating a data type named "date"
  int day;   // member variable of the structure
  int month; // member variable of the structure
  int year;  // member variable of the structure
};

int main()
{
  struct date today = {25, 12, 2011}; // initializing the structure variable named "today" of data type "date"
  cout << "Today's date is " << today.day << "/" << today.month << "/" << today.year << "\n";

  struct date tomorrorow; // declaring a structure variable named "tomorrow" of data type "date"
  tomorrorow.day = 26;    // assigning values to the members of the structure variable "tomorrow"
  tomorrorow.month = 12;
  tomorrorow.year = 2011;
  cout << "Tomorrow's date is " << tomorrorow.day << "/" << tomorrorow.month << "/" << tomorrorow.year << "\n";

  // taking user input in structure variable
  cout << "Enter today's date (dd mm yyyy): ";
  cin >> today.day >> today.month >> today.year;
  cout << "Today's date is: " << today.day << "/" << today.month << "/" << today.year << "\n";

  return 0;
}