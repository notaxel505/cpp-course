#include <iostream>

int main() {
  char message[10] = "Character";

  // There is no value in that position
  std::cout << message[9] << "h" << std::endl;
  std::cout << "-----------------------------" << std::endl;

  int number_eleme = 0;

  std::cout << "Enter number of characters to store: ";
  std::cin >> number_eleme;
  std::cin.ignore(); // Clear the newline from the buffer

  char *array = new char[number_eleme + 1];

  std::cout << "pointer array: " << &array << std::endl;
  std::cout << "Enter the string: " << std::endl;

  for (int i = 0; i < number_eleme; ++i) {
    std::cout << "Enter a character into (" << &array + i << "): ";
    std::cin >> (array + i);
  }

  std::cout << "The string entered is: ";
  for (int i = 0; array[i] != '\0'; ++i) {
    std::cout << *(array + i);
  }
  std::cout << std::endl;

  return 0;
}
