// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double endingBalance = 0.0;
  cout << "Beginning balance: ";
  cin >> beginningBalance;
  cout << "Total deposits: ";
  cin >> totalDeposits;
  cout << "Total withdrawals: ";
  cin >> totalWithdrawals;
  endingBalance = beginningBalance + totalDeposits - totalWithdrawals;
  cout << "Ending balance: " << endingBalance << endl;
  return 0;
  
} // end of main function