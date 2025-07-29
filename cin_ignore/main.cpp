// C++ program to demonstrate the use of cin.ignore() function
// to discard the newline character after reading a variable.
#include <iostream>
using namespace std;

int main() {
  int age;
  char initial;

  // Prompt the user to enter their age
  cout << "Enter your age: ";
  cin >> age;

  // Use cin.ignore() to discard the newline character.
  // This is not strictly neccesary here, but it is a good practice.
  cin.ignore();

  // Prompt the user to enter the first letter of their name
  cout << "Enter the first letter of your name: ";
  cin >> initial;

  // Display the entered age and initial
  cout << "Your age is " << age << " and your initial is " << initial << endl;
  cout << "--------------------------------------------" << endl;

  string name;

  cout << "Enter your age: ";
  cin >> age;

  // In this case, it is very neccesary because without this, the getline()
  // function will read the leftover newline character and skips the user's
  // input.
  cin.ignore();

  cout << "Enter your full name: ";
  getline(cin, name);

  cout << "Name: " << name << endl;

  return 0;
}
