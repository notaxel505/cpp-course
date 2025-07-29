#include <iostream>

int main() {
  /*
  for (int i{}; i < 100000; ++i) {
    std::cout << "i: " << i << std::endl;
  }*/

  const size_t COUNT = 100000;
  size_t i{};
  while (i < COUNT) {
    std::cout << "i: " << i << std::endl;

    ++i;
  }
}
