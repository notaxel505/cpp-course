#include <iostream>

int main() {
  const size_t size{10};

  // Different ways you can declare an array dynamically and how they are
  // initialized
  double *p_salaries{new double[size]}; // salaries array
  double *p_students{
      new (std::nothrow) double[size]{}}; // All values initialized to 0
  double *p_scores{new (std::nothrow) double[size]{
      1, 2, 3, 4, 5}}; // Allocating memory space

  if (p_scores) {
    std::cout << "size of scores (it's a regular pointer): " << sizeof(p_scores)
              << std::endl;
    std::cout << "Successfully allocated memory for scores" << std::endl;

    // Print out elements. Can use regular arrays access notation, or pointer
    // arithmetic
    for (size_t i{}; i < size; ++i) {
      std::cout << "p_scores - " << p_scores[i] << " - " << *(p_scores + i)
                << std::endl;
    }
  }

  delete[] p_salaries;
  p_salaries = nullptr;

  delete[] p_students;
  p_students = nullptr;

  delete[] p_scores;
  p_scores = nullptr;

  std::cout << "------------------------------------------------" << std::endl;

  // Static arrays vs dynamic arrays

  int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the stack

  std::cout << "scores size: " << std::size(scores) << std::endl;
  for (auto s : scores) {
    std::cout << "value: " << s << std::endl;
  }
  std::cout << "==========" << std::endl;

  int *p_scores1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (size_t i{}; i < 10; ++i) {
    std::cout << "value: " << p_scores1[i] << std::endl;
  }

  return 0;
}
