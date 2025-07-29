#include <iostream>

int main() {
  int array[]{1, 2, 3};

  // std::size() (C++ 17)
  std::cout << "Number of elements in array: " << std::size(array) << std::endl;
  std::cout << "------------------------------------" << std::endl;

  // Another way
  int bytes_array = sizeof(array);
  // This is only fine if the array is of integer type
  int bytes_int = sizeof(int);
  /*4 bytes = int
    4n = bytes_array
    bytes_array / 4 = n
    n = size_array*/
  const int size_array = bytes_array / bytes_int;

  std::cout << "bytes_array: " << bytes_array << std::endl;
  std::cout << "bytes_int: " << bytes_int << std::endl;
  std::cout << "Number of elements in array: " << size_array << std::endl;
}
