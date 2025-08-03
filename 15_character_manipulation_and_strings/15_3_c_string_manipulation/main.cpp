#include <cstring>
#include <iostream>

int main() {
  // std::strlen : Find the length of a string. Real arrays and those decayed
  // into pointers

  const char message[]{"The sky is blue"};

  // Array decays into pointer when we use const char*

  const char *message1{"The sky is blue"};

  std::cout << "message: " << message << std::endl;
  std::cout << "message1: " << message1 << std::endl;
  std::cout << std::endl;

  // strlen ignores null character
  std::cout << "std::strlen(message): " << std::strlen(message) << std::endl;

  // Includes the null character
  std::cout << "sizeof(message): " << sizeof(message) << std::endl;
  std::cout << std::endl;

  // strlen still works with decayed arrays
  std::cout << "std::strlen(message1): " << std::strlen(message1) << std::endl;

  // Prints size of pointer
  std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

  std::cout << "---------------------------------------" << std::endl;

  // std::strcmp - signature : int strcmp(const char *lhs, const char *rhs);
  // returns negative value if lhs appears before rhs in lexicographical order,
  // zero  if lhs and rhs compare equal and positive value if lhs appaers after
  // rhs in lexicographical order.

  std::cout << "std::strcmp :" << std::endl;

  const char *string_data1{"Alabama"};
  const char *string_data2{"Blabama"};

  const char string_data3[]{"Alabama"};
  const char string_data4[]{"Blabama"};

  // Print out the comparison
  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2
            << "): " << std::strcmp(string_data1, string_data2) << std::endl;

  std::cout << "std::strcmp(" << string_data3 << ", " << string_data4
            << "): " << std::strcmp(string_data3, string_data4) << std::endl;
  std::cout << std::endl;

  string_data1 = "Bohemian";
  string_data2 = "Rapsody";

  // Print out the comparison
  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2
            << "): " << std::strcmp(string_data1, string_data2) << std::endl;

  std::cout << "std::strcmp(" << string_data2 << ", " << string_data1
            << "): " << std::strcmp(string_data2, string_data1) << std::endl;
  std::cout << std::endl;

  string_data1 = "Same";
  string_data2 = "Same";

  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2
            << "): " << strcmp(string_data1, string_data2) << std::endl;
  std::cout << "---------------------------------------" << std::endl;

  // std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t
  // count);
  // Compares n characters in the strings
  // Returns : Negative value if lhs appears before rhs in lexicographical
  // order.
  // Zero if lhs and rhs compare equal, or if count is zero
  // Positive value if lhs appears after rhs in lexicographical order.

  std::cout << "std::strncmp :" << std::endl;

  const char *string_data5{"Alabama"};
  const char *string_data6{"Blabama"};
  size_t n{1};

  std::cout << "std::strncmp(" << string_data5 << ", " << string_data6 << ", "
            << n << "): " << std::strncmp(string_data5, string_data6, n)
            << std::endl;
  std::cout << "---------------------------------------" << std::endl;

  std::cout << "std::strchr :" << std::endl;

  const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;

  while ((result = std::strchr(result, target)) != nullptr) {
    std::cout << "result begin: " << &result << std::endl;
    std::cout << "Found '" << target << "' starting at '" << result << "'"
              << std::endl;

    ++result;
    std::cout << "result end: " << &result << std::endl;
  }
  std::cout << "---------------------------------------" << std::endl;

  // Find last occurence

  std::cout << "std::strrchr :" << std::endl;

  char input[]{"/home/user/hello.c"};
  char *output = std::strrchr(input, '/');

  if (output) {
    std::cout << output + 1 << std::endl;
  }

  return 0;
}
