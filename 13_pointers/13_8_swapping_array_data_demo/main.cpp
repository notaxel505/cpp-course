#include <iostream>

int main() {
  int arr0[5]{1, 2, 3, 4, 5};
  int arr1[5]{6, 7, 8, 9, 10};

  int *p_arr0{arr0};
  int *p_arr1{arr1};

  // Print arr0
  for (size_t i{}; i < std::size(arr0); ++i) {
    std::cout << p_arr0[i] << " ";
  }

  std::cout << std::endl;

  // Print arr1
  for (size_t i{}; i < std::size(arr1); ++i) {
    std::cout << p_arr1[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "------------------------------------------" << std::endl;

  // Swapping data the hard way
  int temp[std::size(arr0)];

  // Moving data from arr0 into temp
  for (size_t i{}; i < std::size(arr0); ++i) {
    temp[i] = arr0[i];
  }

  // Moving data from arr1 into arr0
  for (size_t i{}; i < std::size(arr0); ++i) {
    arr0[i] = arr1[i];
  }

  // Moving data from temp into arr1
  for (size_t i{}; i < std::size(arr0); ++i) {
    arr1[i] = temp[i];
  }

  // Print arr0
  std::cout << "Printing arr0 :" << std::endl;

  for (int i : arr0) {
    std::cout << i << " ";
  }

  std::cout << std::endl;

  // Print arr1
  std::cout << "Printing arr1 :" << std::endl;

  for (int i : arr1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::cout << "------------------------------------------" << std::endl;

  int *temp1 = p_arr1;
  // Changing pointers address
  p_arr1 = p_arr0;
  p_arr0 = temp1;

  std::cout << "Changing pointers address :" << std::endl;

  for (size_t i{}; i < std::size(arr0); ++i) {
    std::cout << p_arr0[i] << " ";
  }

  std::cout << std::endl;

  for (size_t i{}; i < std::size(arr0); ++i) {
    std::cout << p_arr1[i] << " ";
  }

  return 0;
}
