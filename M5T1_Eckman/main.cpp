#include <iostream>
using namespace std;

/*
CSC 134
M5T1
Joshua Eckman
3/13/23
Purpose: to use a few void and value returning functions
*/

// We can either define our functions before we need them,
// or declare them all at the top.
// The second option is cleaner.
// so, we put all the "function signatures" up top, above main.

void say_hello();               // prints hello
int double_a_number(int num);   // returns number times 2
int add(int num1, int num2);    // returns sum of 2 ints

int main()
{
    // cout << "Hello world!" << endl;
    say_hello();
    int num = double_a_number(2);
    return 0;
}

// Define functions. like a dictionary, the definition is the
// long version
void say_hello() {
    // just print hello
    cout << "Hello" << endl;
    int my_num = 3;
    cout << my_num << " doubled is: " << double_a_number(my_num)<< endl;
    cout << "Give me two ints: ";
    int first, second;
    cin >> first >> second;

    int sum = add(first, second);
    cout << first << " + " << second << " = ";
    cout << sum << endl;



    return; // a void return is implied (you can leave it out)
}

int double_a_number(int num) {
    /*
    input:  any integer
    output: the int times two
    */
    // either is ok
    //return num*2;
    int answer = num*2;
    return answer;
}

int add(int num1, int num2) {
    /*
    input: two integers
    output: their sum
    */
    int sum = num1 + num2;
    return sum;
}
