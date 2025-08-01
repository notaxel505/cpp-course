#include <iostream>

int main() {
  // Verbose nullptr check
  std::cout << "VERBOSE NULLPTR CHECK" << std::endl;

  int *p_number{}; // Initialized to nullptr
  p_number = new int(7);

  // if (!(p_number == nullptr)) {
  //   std::cout << "p_number point to a VALID address :" << std::endl;
  //   std::cout << "*p_number: " << *p_number << std::endl;
  // } else {
  //   std::cerr << "p_number points to an INVALID address" << std::endl;
  // }

  // No verbose nullptr check
  if (p_number) {
    std::cout << "p_number point to a VALID address :" << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;
  } else {
    std::cerr << "p_number points to an INVALID address" << std::endl;
  }

  delete p_number;
  p_number = nullptr;

  // It is OK call delete on a nullptr.
  int *p_number1{};
  delete p_number1; // This won't cause any problem

  return 0;
}
