#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// CSC 134
// M3LAB3 - Craps (version 1)
// Eckman
// 1/15/23

/*
This program simulates a single game of craps.
First version (MVP) is a single roll.
*/

int main() {
  // variables
  int die1, die2, roll; // roll is 2d6
  int seed;             // will use time(0) later
  bool winner = false;

  cout << "Welcome to the craps table\n";

  // for testing, we'll use a repeatable seed
  cout << "What's your lucky number? ";
  cin >> seed;
  srand(seed);

  // start game
  cout << "Let's roll!" << endl; // TODO 'press any key'
  die1 = (rand() % 6) + 1;  // from 1 to 6
  die2 = (rand() % 6) + 1;  // from 1 to 6
  roll = die1 + die2;
  // DEBUG: just use lucky number as roll
  roll = seed;

  cout << "You rolled: (" << die1 << " + " << die2 << ") -> ";
  cout << roll << endl;

  // determine outcome
  switch (roll) {
    // instant losses
    case 2:
      cout << "Snake eyes!" << endl;
      winner = false;
      break;
    case 12:
      cout << "Boxcars!" << endl;
      winner = false;
      break;
    
    // instant wins
    case 7:
      cout << "You win!" << endl;
      winner = true;
      break;
    // TODO add 11
    
    // to be comtinued (point rolls)
    default:
      cout << "Unkown - TODO" << endl;
      break;
    
  }
  if (winner) {
    cout << "You won!" << endl;
  } else {
    cout << "Sorry -- you didn't win" << endl;
  }
  
  // end game
  cout << "Thank you for playing!" << endl;
  return 0;
}