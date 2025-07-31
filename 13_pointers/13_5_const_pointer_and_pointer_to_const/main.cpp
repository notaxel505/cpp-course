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
  std::cout << "-------------------------------------" << std::endl;

  // Pointer to const

  // Pointer pointing to constant data : You can't modify the data through the
  // pointer

  std::cout << "Pointer is modifiable, pointed to value is almost constant : "
            << std::endl;

  int number4{632}; // Although you can omit the const on number4 here and it is
                    // still going to compile, it is advised to be as explicit
                    // as possible in your code and put the const in front. You
                    // can modify the value of "number4" of this way: number4 =
                    // 4. Make your intents CLEAR

  const int *p_number3{&number4}; // Can't modify "number4" through "p_number3"

  std::cout << "p_number3: " << p_number3 << std::endl;
  std::cout << "*p_number3: " << *p_number3 << std::endl;
  std::cout << "number4: " << number4 << std::endl;
  std::cout << "*number4: " << &number4 << std::endl;
  std::cout << std::endl;

  std::cout << "Modifying the value pointed to by p_number3 through the "
               "pointer (Compile Error) :"
            << std::endl;

  // *p_number3 = 44;

  // Although we can't change what's pointed to by p_number3,
  // we can still change where it's pointing
  std::cout << std::endl;

  std::cout << "Changing the address pointed to by p_number3 :" << std::endl;

  int number5{872};
  p_number3 = &number5;

  std::cout << "p_number3: " << p_number3 << std::endl;
  std::cout << "*p_number3: " << *p_number3 << std::endl;
  std::cout << "number5: " << number5 << std::endl;
  std::cout << "&number5: " << &number5 << std::endl;
  std::cout << std::endl;

  // You can't set up a mofiable pointer to const data, You'll get a compiler
  // error :Invalid conversion from 'const type*' to 'type*'.
  // const int some_data{55};
  // int* ptr_some_data{&some_data}; Compiler error
  std::cout << "-------------------------------------" << std::endl;

  // Both pointer and pointed to value are constants
  const int number6{459};
  const int *const p_number4{&number6};

  std::cout << "Pointer is constant, value pointed to is constant :"
            << std::endl;
  std::cout << "number6: " << number6 << std::endl;
  std::cout << "&number6: " << &number6 << std::endl;
  std::cout << "p_number4: " << p_number4 << std::endl;
  std::cout << "*p_number4: " << *p_number4 << std::endl;

  // Can't modify the pointed to value through the pointer
  std::cout << "Changing value pointed to by p_number4 through the pointer "
               "(Compile Error)"
            << std::endl;

  // *p_number4 = 222; Error : Trying to assign to read only location

  // Can't change where the pointer is pointing to : The pointer is itself
  // constant
  std::cout << "Changing the pointer p_number4 address itself (Compile Error)"
            << std::endl;

  // int number7{333};
  // p_number4 = &number7; Error : Trying to assign to read only location
  std::cout << "-------------------------------------" << std::endl;

  // Pointer is constant (can't make it point anywhere else)
  // but pointed to value can change
  std::cout << "Pointer is constant, pointed to value can change:" << std::endl;
  int number7{982};
  int *const p_number5{&number7};

  std::cout << "p_number5: " << p_number5 << std::endl;
  std::cout << "*p_number5: " << *p_number5 << std::endl;
  std::cout << "number7: " << number7 << std::endl;
  std::cout << "&number7: " << &number7 << std::endl;
  std::cout << std::endl;

  std::cout << "Changing value pointed to through p_number5 pointer:"
            << std::endl;

  *p_number5 = 456;
  std::cout << "The value pointed to by p_number5 now is: " << *p_number5
            << std::endl;
  std::cout << std::endl;

  std::cout
      << "Changing the address where p_number5 is pointing (Compile Error)"
      << std::endl;
  // int number8{2928};
  // p_number5 = &number8 (Compile Error)

  return 0;
}
