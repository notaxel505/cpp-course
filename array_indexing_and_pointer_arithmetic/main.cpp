#include <iostream>

int main() {
  std::cout << "ARRAY INDEXING AND POINTER ARITHMETIC" << std::endl;

  // The pointer addresses of an array occupies from first position of the array
  // until the final position of the array

  // Array size is 6 * sizeof(int) what means the array size is 24 bytes
  int array[]{1, 2, 3, 4, 5, 6};

  std::cout << "Pointer: " << &array
            << std::endl; // The first position of the array

  // The first position of the array plus 4 (because the array type is int and
  // ints occupy 4 bytes)
  std::cout << "Pointer from the array[1] position: " << &array[1] << std::endl;

  // These are all equivalent ways to show the value of any position of any
  // array
  std::cout << array[1] << std::endl;
  std::cout << *(array + 1) << std::endl;
  std::cout << 1 [array] << std::endl;
  std::cout << "-----------------------------------------------" << std::endl;

  // Example below shows pointer arithmetic and the result of the operation is
  // not part of the array. &array + 2 = 0x7ffcd61fb710 + 0x7ffcd61fb710 +
  // 0x7ffcd61fb710
  // std::cout << "&array + 2 = " << &array + 2 << std::endl;

  return 0;
}
