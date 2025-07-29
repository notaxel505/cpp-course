#include <iostream>

int main() {
  /*If you use braces and don't initialize all elements, the remaining
     elements will be initialized to 0*/
  int array[5]{1, 2, 3}; // array[5] {1, 2, 3, 0, 0}

  for (int value : array) {
    std::cout << "value: " << value << std::endl;
  }
  std::cout << "------------------------------" << std::endl;

  // This case behaves the same
  int second_array[5] = {1, 2, 3};

  for (int value : second_array) {
    std::cout << "second_array_value: " << value << std::endl;
  }
  std::cout << "------------------------------" << std::endl;

  /*The behavior of this case is different because elements that are
    not initialized will contain garbage data (because there is no
    use of braces)*/
  int third_array[5];
  third_array[0] = 1;

  for (int value : third_array) {
    std::cout << "third_array_value: " << value << std::endl;
  }
  std::cout << "------------------------------" << std::endl;

  // Omit the size of the array at declaration
  int fourth_array[]{1, 2, 3};

  for (int value : fourth_array) {
    std::cout << "fourth_array_value: " << value << std::endl;
  }
  std::cout << "------------------------------" << std::endl;

  /*If you try to access an out-of-bounds element in an array, you will get
    undefined behavior (it may print garbage or crash)*/
  int fifth_array[]{1, 2};
  std::cout << "fifth_array[4] (size of the array 2):" << fifth_array[4]
            << std::endl;
  std::cout << "------------------------------" << std::endl;

  //int sixth_array[2]{1, 2, 3}; this is not possible
  //------------------------------------------------------------

  //Read-Only array (const)
  const int seventh_array[] {1, 2, 3, 4};

  for (int value: seventh_array) {
    std::cout << "seventh_array_value: " << value << std::endl;
  }

  return 0;
}
