// CSC 134
// M3HW1 - Silver
// Joshua Eckman
// 2/17/23

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  // Question 1
  string answer;
  
  cout << "Question 1:" << endl;
  cout << "Hello, I am a C++ program!" << endl;
  cout << "Do you like me? Please type yes or no." << endl;
  cin >> answer;
  if (answer == "yes") {
    cout << "That’s great! I’m sure we’ll get along." << endl;
  }
  else if (answer == "no") {
    cout << "Well, maybe you’ll learn to like me later." << endl;
  }
  else {
    cout << "If you’re not sure… that’s OK." << endl;
  }

  // Question 2
  cout << "\nQuestion 2:" << endl;
  double price;       // dollars
  double tax_pct;     // example; 8% (0.08)
  double tax_ammount; // dollar value
  double tip_pct;
  double tip_ammount;
  double subtotal;
  double total;
  int dine_in;
  string item_name = "cheeseburger";
  int    item_count = 1;

  cout << "What is the price of your meal" << endl;
  cin >> price;

  cout << "Is your order for dine in or takeaway?" << endl;
  cout << "Please enter 1 if the order is dine in, 2 if it is to go" << endl;
  cin >> dine_in;
  
  tip_pct = 0.15;  // 15%
  tax_pct = 0.08;  // 8%

  if (dine_in == 1) {
  subtotal = price * item_count;
  tax_ammount = subtotal * tax_pct;
  total = subtotal + tax_ammount;
  tip_ammount = total * tip_pct;
  }
  else if (dine_in == 2) {
  subtotal = price * item_count;
  tax_ammount = subtotal * tax_pct;
  total = subtotal + tax_ammount;
  }
  else {
    cout << "Please enter valid option." << endl;
  }

  cout << "\nWelcome to Burger Barn!" << endl;
  cout << "You ordered 1 " << item_name << endl;

  cout << fixed << setprecision(2); // From #include <iomanip>, fixes decimals

  cout << "RECEIPT" << endl << "_____________________" << endl;
  cout << item_count << " " << item_name << ": " << "$" << price << endl;
  cout << "Subtotal:" << "\t\t" << "$" << subtotal << endl;
  cout << "Tax: " << "\t\t\t" << "$" << tax_ammount << endl;
  cout << "Tip: " << "\t\t\t" << "$" << tip_ammount << endl;
  cout << "_____________________" << endl;
  cout << "Total:" << "\t\t\t" << "$" << total << endl;

  // Question 3
  cout << "\nQuestion 3:" << endl;
  void option();
  int choice;

  cout << "WARNING! Deadly Traps Lie Ahead" << endl;
  cout << "After much journeying, you have finally made it to the Dungeon of the Forgotten One. Traversing its depths, you found it wasn't that difficult to make your way through. But now, the challenge really begins as you find yourself face to face with a large, iron door. There is no handle, but a hole in the wall on either side. The interior of one is filled with web and the other is lined with crimson. You believe there may be a trigger that will open the door within one of them. Which do you choose?" << endl;
  cout << "Type 1 for Webbed Hole or 2 for Crimson Hole" << endl;
  cin >> choice;
  
  if (choice == 2) {
    cout << "As you reach in, you feel a lever at the very end. Pulling it, a blade swiftly decends straight towards your arm, leaving you no time to withdraw in time. You Lose." << endl;
  }
  else if (1) {
    option();
  }
  else {
    cout << "Please enter valid option." << endl;
  }

  // Question 4
  cout << "\nQuestion 4:" << endl;
  int num1, num2, math_answer, guess;

  srand(time(0));
  num1 = (rand() % 9) + 1;
  num2 = (rand() % 9) + 1;
  math_answer = num1 + num2;

  cout << num1 << " + " << num2 << " = ";
  cin >> guess;

  if (guess == math_answer) {
    cout << "Correct!" << endl;
  }
  else {
    cout << "Incorrect" << endl;
  }
  
  return 0;
}

void option() {
  // Question 3... continued
  int choice;
  
  cout << "As you reach in, your arm covered in webbing the further you go, you feel a lever at the very end. When you pull it, the door beside you creaks open, allowing you to enter." << endl;
  cout << "However, the force of the door is too much and it continues on until it slams into a crumbling pillar. The whole room begins to shake and debris begins to fall around you. It seems this room is beginning to collapse! Ahead, you spot another iron door, possibly the passage to the next room if you can make it in time. There is also an alcove in the stone walls closer to you, if you wanted to seek shelter from the stone falling around your head - that is if you arent sealed inside." << endl;
  cout << "Type 1 run for the door or 2 to hide in the alcove." << endl;
  cin >> choice;
  
  if (choice == 1) {
    cout << "You decide to make a break for the door and dodging rocks and debris, you actually make it to the other side of the room. However, trying the handle, you find that the door is locked - behind another puzzle you simply do not have the time to solve as the roof caves in. You Lose." << endl;
  }
  else if (2) {
    cout << "Diving into the small alcove, you watch the rest of the ceiling cave in, trapping you into the small space. Feeling around your surroundings, you find that not all that holds you is made of stone, and begin breaking down a brittle, wooden wall to reveal a new chamber." << endl;
    cout << "As you get your barrings, you realize this is the room you've been searching for, or at least, what will do. It's one of the dungeon's treasure rooms - albeit a small one. Besides the antique painting you just burst your way through, there are two chests. Which will you search first?" << endl;
    cout << "type 1 to open the chest on your left or 2 to open the chest on your right..." << endl;
  
    cin >> choice;

    if (choice == 1) {
      cout << "As you lift the lid, you are met with the sight of gold and silver. When you move to open the other chest, however, you find it missing. Filling your bag with as much as you can carry, you then move to the next door, hoping this dungeon has another exit. You Win!" << endl;
    }
    else {
      cout << "As you lift the lid, you are met with the sight of a large, slimey tongue. Two long arms grab you and pull you into its now toothed maw. You Lose." << endl;
    }
  }
  else {
    cout << "Please enter valid option." << endl;
  }
}
