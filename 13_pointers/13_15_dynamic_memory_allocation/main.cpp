#include <iostream>

int main() {
  // How we've used pointers so far
  int number{22}; // Stack
  int *p_number{&number};

  std::cout << "DECLARING POINTER AND ASSIGNING ADDRESS" << std::endl;

  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;
  std::cout << "*p_number: " << p_number << std::endl;
  std::cout << "p_number: " << *p_number << std::endl;
  std::cout << "-------------------------------------------" << std::endl;

  // int *p_number1; // Uninitialized pointer, contains junk address

  // int number1{12};
  // p_number1 = &number1; // Make it point to a valid address

  std::cout << "Uninitialized pointer :" << std::endl;
  // std::cout << "*p_number1: " << *p_number1 << std::endl;
  std::cout << "-------------------------------------------" << std::endl;

  // BAD
  // Writing into uninitialized pointer through dereference

  int *p_number2; // Contains junk address : could be anything

  std::cout << "Writing into uninitialized pointer through dereference"
            << std::endl;

  // *p_number2 = 55; // Writing into junk address : BAD!

  std::cout << "p_number2: " << p_number2
            << std::endl; // Reading from junk address

  std::cout << "DEREFERENCING BAD MEMORY" << std::endl;

  std::cout << "*p_number2: " << *p_number2 << std::endl;
  std::cout << "-------------------------------------------" << std::endl;

  // Initializing pointer to null

  // int *p_number3{nullptr}; // Also works
  int *p_number3{}; // Initialized with pointer equivalent of zero : nullptr. A
                    // pointer pointing nowhere

  std::cout << "Writing into nullptr memory :" << std::endl;
  // *p_number3 = 33; // Writing into a pointer pointing nowhere : BAD, CRASH
  std::cout << "Done writting" << std::endl;
  std::cout << std::endl;

  std::cout << "Reading and writting through nullptr :" << std::endl;
  // std::cout << "p_number3: " << p_number3 << std::endl;
  // std::cout << "*p_number3: " << *p_number3 << std::endl;
  std::cout << "-------------------------------------------" << std::endl;

  // Dynamic heap memory
  int *p_number4{nullptr};
  p_number4 =
      new int; // Dynamically allocate space for a single int on the heap.
  // This memory belongs to our program from now on. The system can't use it for
  // anything else, until we return it. After this line executes, we will have a
  // valid memory location allocated. The size of the allocated memory will be
  // such that it can store the type pointed to by the pointer

  *p_number4 = 77; // Writing into dynamically allocated memory
  std::cout << "DYNAMICALLY ALLOCATED MEMORY :" << std::endl;
  std::cout << "*p_number4: " << *p_number4 << std::endl;

  // Return memory to the OS
  delete p_number4;
  p_number4 = nullptr;

  p_number4 = new int(2);
  std::cout << "New value of *p_number4: " << *p_number4 << std::endl;

  // Return memory to the OS
  delete p_number4;
  p_number4 = nullptr;

  return 0;
}
