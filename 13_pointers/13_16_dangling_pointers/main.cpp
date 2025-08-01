#include <iostream>

int main() {
  // Case 1 : Unitialized pointer

  // int *p_number; // Dangling unitialized pointer
  //
  // std::cout << "CASE 1 : UNITIALIZED POINTER" << std::endl;
  //
  // std::cout << "p_number: " << p_number << std::endl;
  // std::cout << "*p_number: " << *p_number << std::endl; // CRASH!
  // std::cout << "---------------------------------------------" << std::endl;

  // Case 2 : deleted pointer
  std::cout << "CASE 2 : DELETED POINTER" << std::endl;
  int *p_number1{new int(65)};

  std::cout << "*p_number1 (before deleted): " << *p_number1 << std::endl;

  delete p_number1;

  std::cout << "*p_number1 (after deleted): " << *p_number1 << std::endl;
  std::cout << "---------------------------------------------" << std::endl;

  // Case 3 : Multiple pointers pointing to same address
  std::cout << "CASE 3 : MULTIPLE POINTERS POINTING TO SAME ADDRESS"
            << std::endl;

  int *p_number2{new int{83}};
  int *p_number3{p_number2};

  std::cout << "p_number2 - " << p_number2 << " - " << *p_number2 << std::endl;
  std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;

  // Deleting p_number2
  delete p_number2;

  // p_number3 points to deleted memory. Deferencing it will lead to undefined
  // behavior : Crash/gragabe or whatever
  std::cout << "p_number3 (after deleting p_number2) - " << p_number3 << " - "
            << *p_number3 << std::endl;
  std::cout << "---------------------------------------------" << std::endl;

  // Solution 1 : Initialize your pointers inmmediately upon declaration
  std::cout << "Solution 1 :" << std::endl;

  int *p_number4{new int(5)};

  // Check for nullptr before use
  if (p_number4) { // if (p_number4 != nullptr). It's the same
    std::cout << "*p_number4: " << *p_number4 << std::endl;
  } else {
    std::cout << "Invalid address" << std::endl;
  }
  std::cout << "---------------------------------------------" << std::endl;

  // Solution 2 : Right after you call delete on a pointer, remember to reset
  // the pointer to nullptr to make it CLEAR it doesn't point anywhere

  std::cout << "Solution 2 :" << std::endl;

  int *p_number5{new int(82)};

  // Use the pointer however you want
  std::cout << "p_number5 - " << p_number5 << " - " << *p_number5 << std::endl;

  delete p_number5;
  p_number5 = nullptr; // Reset the pointer

  if (p_number5) {
    std::cout << "p_number5 - " << p_number5 << " - " << *p_number5
              << std::endl;
  } else {
    std::cout << "Invalid address" << std::endl;
  }

  // Solution 3 : For multiple pointers pointing to the same address, make sure
  // there is one clear pointer (master pointer) that owns the memory
  // (responsible for releasing when necesary), other pointers should only be
  // able to dereference when the master pointer is valid

  std::cout << "Solution 3 :" << std::endl;

  int *p_number6{new int(382)}; // Let's say p_number6 is the master pointer
  int *p_number7{p_number6};

  // Dereference the pointers and use them
  std::cout << "p_number6 - " << p_number6 << " - " << *p_number6 << std::endl;

  if (p_number6) {
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7
              << std::endl;
  }

  delete p_number6; // Master releases the memory
  p_number6 = nullptr;

  if (p_number6) {
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7
              << std::endl;
  } else {
    std::cerr << "WARNING : Trying to use an invalid pointer" << std::endl;
  }

  return 0;
}
