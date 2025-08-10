#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::cout << "Comparing with comparison operators :" << std::endl;

  std::string hello_str{"Hello"};
  std::string bello_str{"Bello"};

  std::cout << std::boolalpha;

  // Using the comparison operators
  std::cout << hello_str << " == " << bello_str << ": "
            << (hello_str == bello_str) << std::endl;

  std::cout << hello_str << " != " << bello_str << ": "
            << (hello_str != bello_str) << std::endl;

  std::cout << hello_str << " > " << bello_str << ": "
            << (hello_str > bello_str) << std::endl;

  std::cout << hello_str << " >= " << bello_str << ": "
            << (hello_str >= bello_str) << std::endl;

  std::cout << hello_str << " < " << bello_str << ": "
            << (hello_str < bello_str) << std::endl;

  std::cout << hello_str << " <= " << bello_str << ": "
            << (hello_str <= bello_str) << std::endl;
  std::cout << '\n';

  // Can even compare std::strings to C-strings

  const char *c_string1{"Bello"};
  hello_str = "Hello";

  std::cout << "hello_str.size(): " << hello_str.size() << std::endl;
  std::cout << "std::strlen(c_string1): " << std::strlen(c_string1) << '\n'
            << std::endl;

  std::cout << hello_str << " == " << bello_str << ": "
            << (hello_str == bello_str) << std::endl;

  std::cout << hello_str << " != " << bello_str << ": "
            << (hello_str != bello_str) << std::endl;

  std::cout << hello_str << " > " << bello_str << ": "
            << (hello_str > bello_str) << std::endl;

  std::cout << hello_str << " >= " << bello_str << ": "
            << (hello_str >= bello_str) << std::endl;

  std::cout << hello_str << " < " << bello_str << ": "
            << (hello_str <= bello_str) << std::endl;

  std::cout << hello_str << " <= " << bello_str << ": "
            << (hello_str <= bello_str) << '\n'
            << std::endl;

  // Be careful about char arrays not terminated with null character
  hello_str = "hello";
  // const char hello_char_array[]{'h', 'e', 'l', 'l', 'o'}; // The compiler is
  // going to read past the string until it sees null character and consider
  // that end of the string. Your comparisons may give erronous results

  const char hello_char_array[]{
      'h', 'e', 'l',
      'l', 'o', '\0'}; // It works right if you put the '\' yourself

  std::cout << hello_str
            << " == hello_char_array: " << (hello_str == hello_char_array)
            << std::endl;

  return 0;
}
