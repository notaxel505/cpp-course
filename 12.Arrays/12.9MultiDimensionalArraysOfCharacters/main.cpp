#include <iostream>

int main() {
  const size_t name_length{15};

  char members[][name_length]{{'J', 'o', 'h', 'n'},
                              {'S', 'a', 'm', 'u', 'e', 'l'},
                              {'R', 'a', 's', 'i', 'd'},
                              {'R', 'o', 'd', 'r', 'i', 'g', 'u', 'e', 'z'}};

  // Printing out like this is unsafe : may go over and print outside your valid
  // memory block block until a terminating null character is encountered.

  std::cout << "std::size(members) : " << std::size(members) << std::endl;

  for (size_t i{}; i < std::size(members); ++i) {
    std::cout << "members[" << i << "] : " << members[i] << std::endl;
  }
  std::cout << "-------------------------------------" << std::endl;

  // Can loop around manually printing out each character
  for (size_t x{}; x < std::size(members); ++x) {
    for (size_t y{}; y < std::size(members[x]); ++y) {
      std::cout << members[x][y];
    }
    std::cout << std::endl;
  }
  std::cout << "-------------------------------------" << std::endl;

  // Safe mode
  char members2[][name_length]{"John", "Samuel", "Rasid", "Rodriguez"};

  for (size_t i{}; i < std::size(members2); ++i) {
    std::cout << members2[i] << std::endl;
  }

  return 0;
}
