#include <iostream>

int main() {
  // // Exception
  // for (size_t i{}; i < 100; ++i) {
  //   try {
  //     int *data = new int[10000000000000];
  //   } catch (std::exception &ex) {
  //     std::cerr << "Something went wrong : " << ex.what() << std::endl;
  //   }
  //
  // }

  // std::nothrow
  for (size_t i{}; i < 100; ++i) {
    int *data = new (std::nothrow) int[10000000000000];

    if (data) {
      std::cout << "Data allocated" << std::endl;
    } else {
      std::cerr << "Data allocation failed" << std::endl;
    }
  }

  return 0;
}
