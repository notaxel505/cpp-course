#include <iostream>

int main() {
  const char *const students[]{"Daniel Gray", "Tuna Philbe", "The Rock",
                               "Kumar Singh", "Sam Ali",     "Dave Mahoro"};

  // Print out the students
  for (const char *student : students) {
    std::cout << student << std::endl;
  }

  // *students[0] = 'K'; Compile Error

  // Can't swap for new student
  // const char *new_student{"Bob the Greet"};
  // students[0] = new_student; Compile Error

  // You could swap for new student if array variable would look like this
  // "const char *students[]{...};"

  std::cout << std::endl;
  std::cout << "Printing out the students :" << std::endl;

  for (const char *student : students) {
    std::cout << student << std::endl;
  }

  return 0;
}
