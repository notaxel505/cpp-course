#include <iostream>

int main() {
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  // This may cause undefined behaviour and potentially crash
  std::cout << "numbers[12]: " << numbers[12] << std::endl;

  // This is dangerous because here I'm writing outside the array's bounds and
  // it may cause undefined behaviour and potentially crash
  numbers[129] = 1000;

  std::cout << "numbers[129] = " << numbers[129] << std::endl;

  return 0;
}
