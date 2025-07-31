#include <iostream>

int main() {
  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int *p_scores{scores};

  std::cout << "Values in scores array (p_score pointer increment) :"
            << std::endl;

  for (size_t i{}; i < std::size(scores); ++i) {
    std::cout << "Address: " << p_scores << " value: " << *p_scores
              << std::endl;
    ++p_scores; // Moves forward by sizeof(int) : 4 bytes
  }
  std::cout << "--------------------------------------------" << std::endl;

  std::cout << "EXPLICIT ADDITION OF INTEGER :" << std::endl;
  p_scores = scores; // Reset the pointer to the start of the array
  std::cout << "scores[4]" << *(p_scores + 4)
            << std::endl; // Moves forward by 4 * sizeof(int)
  std::cout << "--------------------------------------------" << std::endl;

  // Can also do arithmetic on the array name just like any pointer
  std::cout << "POINTER ARITHMETIC ON ARRAY NAME :" << std::endl;
  for (size_t i{}; i < std::size(scores); ++i) {
    std::cout << "Value: " << *(scores + i) << std::endl;
  }
  std::cout << "--------------------------------------------" << std::endl;

  // Can print the elements in reverse order
  std::cout
      << "ELEMENTS IN REVERSE ORDER WITH DECREMENTING POINTER ARITHMETIC :"
      << std::endl;
  for (size_t i{std::size(scores)}; i > 0; --i) {
    std::cout << "Value: " << *(scores + i - 1) << std::endl;
  }
  std::cout << "--------------------------------------------" << std::endl;

  // Print in reverse order with -- operator on p_score
  std::cout
      << "ELEMENTS IN REVERSE ORDER -- ARITHMETIC ON THE p_score POINTER :"
      << std::endl;

  p_scores = scores + std::size(scores);

  for (size_t i{std::size(scores)}; i > 0; --i) {
    std::cout << "Value: " << *(--p_scores) << std::endl;
  }
  std::cout << "--------------------------------------------" << std::endl;

  p_scores = scores; // Reset the pointer to the start of the array

  scores[0] = 31; // Array index notation
  *(scores + 1) =
      32; // Equivalent to scores[1] = 32; Pointer arithmetic on array name
  *(p_scores + 2) =
      33; // Equivalent to scores[2] = 33. Pointer arithmetic on p_score pointer

  std::cout << "Printing out the array after modification of 3 first elements :"
            << std::endl;
  for (int score : scores) {
    std::cout << score << " " << std::endl;
  }
  std::cout << std::endl;

  return 0;
}
