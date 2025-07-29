#include <iostream>

int main() {
  int array[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto value: array) {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  //This is valid
  for (auto value: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  return 0;
}
