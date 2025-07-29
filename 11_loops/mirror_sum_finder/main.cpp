#include <iostream>

int main() {
  std::cout << "Pairs where i + j = 100" << std::endl;

  for (int i = 1, j = 99; i <= j; i++, j--) {
    if (i + j == 100) {
      std::cout << "(" << i << ", " << j << ")" << std::endl;
    }
  }
}
