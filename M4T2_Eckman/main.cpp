#include <iostream>
using namespace std;
// CSC 134
// M4T2 - Menus
// Eckman Joshua
// 2/27/23

// menu functions
void option_one() {
  // count from 0 to 9
  cout << "Using while() to count" << endl;
  int num = 0;
  while (num < 10) {
    cout << num << " ";
    num++;
  }
  cout << endl;

  cout << "Using for() to count" << endl;
  for (int i=0; i<10; i++) {
    cout << i << " ";
  }
}
void option_two() {
  // sum up five numbers
}
void option_three() {
  // TODO: what does this even do
}

int main()
{
  // Display a menu
  // have the user choose 1, 2, or 3.
  // do somthing based on choice

  cout << "Welcome to the menu" << endl;
  cout << "Press 1 to count" << endl;
  cout << "Press 2 to sum up numbers" << endl;
  cout << "Press 3 to TODO" << endl; // not implemented yet
  cout << "Choice: ";

  // Input validation
  int choice;
  cin >> choice;
  // user must pick 1, 2, or 3
  while (choice < 1 || choice > 3) {
    cout << "Please choose 1, 2, or 3: ";
    cin >> choice;
  }
  // If we get here, we know choice is valid
  if (choice == 1) {
    option_one(); // function call
  }
  
  
  return 0;
}
