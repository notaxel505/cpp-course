#include <iostream>

int main() {
  int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Printing positions
  std::cout << "Scores :" << std::endl;
  for (auto score : scores) {
    std::cout << score << " ";
    score = 10;
  }
  std::cout << std::endl;

  for (auto &score : scores) {
    score *= 10;
  }

  // Printing after change
  std::cout << "Scores :" << std::endl;
  for (auto &score : scores) {
    std::cout << score << " ";
  }
  std::cout << std::endl;

  return 0;
}
