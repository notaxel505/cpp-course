#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  std::srand(std::time(0));

  int random_num = std::rand();

  std::cout << "random_num: " << random_num << std::endl; // 0 ~ RAND

  random_num = std::rand();

  std::cout << "random_num: " << random_num << std::endl; //0 ~ RAND
  
  // The below example works because what the code does is have a
  // maximum number what is 10 so the number can't exceed 10 for
  // the hehavior of the modulo sign
  random_num = std::rand() % 11; // [0 ~ 10]
  
  std::cout << "random_num: " << random_num << std::endl;

  // The below example works because adding one prevents the number 0
  // from appearing.
  random_num = std::rand() % 11 + 1; // [1 ~ 10]

  return 0;
}
