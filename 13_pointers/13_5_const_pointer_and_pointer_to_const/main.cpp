#include <iostream>

int main() {
  // A raw variable that can be modified
  std::cout << "RAW VARIABLE THAT CAN BE MODIFIED" << std::endl;

  int number{5}; // Not constant, can change int number any we want
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;

  // Modify
  number = 12;
  number += 7;

  // Access - Print out
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;
  std::cout << "-------------------------------------" << std::endl;

  // Pointer : Can modify the data and the pointer itself
  int *p_number2{nullptr};
  int number2{23};

  p_number2 = &number2;

  std::cout << "POINTER AND VALUE POINTED TO : BOTH MODIFIABLE" << std::endl;
  std::cout << "p_number2: " << p_number2 << std::endl;   // Address
  std::cout << "*p_number2: " << *p_number2 << std::endl; // 23
  std::cout << "number2: " << number2 << std::endl;       // 23
  std::cout << "&number2: " << &number2 << std::endl;     // Address
  std::cout << std::endl;

  // Change the pointed to value through Pointer
  std::cout << "MODIFYING THE VALUE OF NUMBER2 THROUGH THE POINTER"
            << std::endl;

  *p_number2 = 432;

  std::cout << "p_number2: " << p_number2 << std::endl;   // Address
  std::cout << "*p_number2: " << *p_number2 << std::endl; // 432
  std::cout << "number2: " << number2 << std::endl;       // 432
  std::cout << "&number2: " << &number2 << std::endl;     // Address
  std::cout << std::endl;

  // Change the pointer itself to make it point somewhere else
  std::cout << "CHANGING THE POINTER ITSELF TO MAKE IT POINT SOMEWHERE ELSE"
            << std::endl;

  int number3{56};
  p_number2 = &number3;

  std::cout << "p_number2: " << p_number2 << std::endl;   // Address
  std::cout << "*p_number2: " << *p_number2 << std::endl; // 56
  std::cout << "number2: " << number2 << std::endl;       // 432
  std::cout << "&number2: " << &number2 << std::endl;     // Address
  std::cout << "number3: " << number3 << std::endl;       // 56
  std::cout << "&number3: " << &number3 << std::endl;     // Address

  return 0;
}
