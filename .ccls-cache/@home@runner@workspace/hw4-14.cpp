// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>

using namespace std;

int main() {
  double smalltotal = 0.0;
  double mediumtotal = 0.0;
  double largetotal = 0.0;
  double familytotal = 0.0;
  double total = 0.0;
  double smallpercent = 0.0;
  double mediumpercent = 0.0;
  double largepercent = 0.0;
  double familypercent = 0.0;
  cout << "Small total: ";
  cin >> smalltotal;
  cout << "Medium total: ";
  cin >> mediumtotal;
  cout << "Large total: ";
  cin >> largetotal;
  cout << "Family total: ";
  cin >> familytotal;
  
  total = smalltotal + mediumtotal + largetotal + familytotal;
  smallpercent = smalltotal / total * 100;
  mediumpercent = mediumtotal / total * 100;
  largepercent = largetotal / total * 100;
  familypercent = familytotal / total * 100;

  cout << smallpercent << " --->Small" << endl;
  cout << mediumpercent << " --->Medium" << endl;
  cout << largepercent << " --->Large" << endl;
  cout << familypercent << " --->Family" << endl;
  cout << "-----------------" << endl;
  cout << total << " --->Total" << endl;
  return 0;
  

} // end of main function