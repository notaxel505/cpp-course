#include <iostream>

int main() {
  int package[][4]{
    {1, 2, 3},
    {1, 2, 3},
    {1, 2, 3},
    {1, 2, 3}
  };

  std::cout << "package[0][3]: " << package[0][3] << std::endl;

  return 0;
}
