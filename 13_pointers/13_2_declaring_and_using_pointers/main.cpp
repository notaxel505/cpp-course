#include <iostream>

int main() {
  // Declare and initialize pointer
  int *p_number{}; // Will initialize with nullptr
  double *p_fractional_number{};

  // Explicity initialize with nullptr
  int *p_number2{nullptr};
  int *p_fractional_number2{nullptr};

  std::cout << "sizeof(int): " << sizeof(int) << std::endl;       // 4
  std::cout << "sizeof(double): " << sizeof(double) << std::endl; // 8
  std::cout << "sizeof(*int): " << sizeof(int *) << std::endl;    // 8
  std::cout << "sizeof(*int): " << sizeof(int *) << std::endl;    // 8
  std::cout << "------------------------------------------------" << std::endl;

  // Initializing pointers and assigning them data
  // We know that pointers sotre addreseses of variables
  int int_var{43};
  int *p_int{&int_var};

  std::cout << "int_var: " << int_var << std::endl;
  std::cout << "address in memory of \"int_var\" (p_int pointer): " << p_int
            << std::endl;

  // You can also change the address stored in a pointer any time
  int int_var2{65};
  p_int = &int_var2;
  std::cout << "\"p_int\" have a different address (address of \"int_var2\"): "
            << p_int << std::endl;
  std::cout << "*p_int: "<< *p_int << std::endl;

  delete p_number;
  delete p_fractional_number;
  delete p_number2;
  delete p_fractional_number2;

  return 0;
}
