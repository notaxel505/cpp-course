#include <iostream>
#include <string>

int main() {
  std::cout << "Size of a string :" << std::endl;

  std::string str1{"Hello there"};

  std::cout << "str1.size(): " << str1.size() << '\n' << std::endl;

  std::cout << "For loop with array index anotation :" << std::endl;

  // Reading characters in std::string : array index operator. Reading indexed
  // loop.
  for (size_t i{}; i < str1.size(); ++i) {
    std::cout << str1[i] << ' ';
  }
  std::cout << '\n' << std::endl;

  std::cout << "Using range based for loop :" << std::endl;

  for (char value : str1) {
    std::cout << value << ' ';
  }
  std::cout << '\n' << std::endl;

  std::cout << "Using the std::string::at() metod :" << std::endl;
  std::cout << "str1 : (for loop with at()) :" << std::endl;

  for (size_t i{}; i < str1.size(); ++i) {
    std::cout << str1.at(i) << ' ';
  }
  std::cout << '\n' << std::endl;

  std::cout << "Modifying with operator[] and at() :" << std::endl;

  str1[0] = 'B';
  str1.at(1) = 'a';

  std::cout << "str1: " << str1 << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  std::cout << "Getting the front and back characters :" << std::endl;

  std::string str2{"The Phoenix King"};

  char &front_char = str2.front();
  char &back_char = str2.back();

  std::cout << "The front char in str2 is: " << front_char << std::endl;
  std::cout << "The back char in str2 is: " << back_char << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  std::cout << "c_str method :" << std::endl;

  // doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str. Returns
  // const char * to the wrapped string. You shouldn't use it to modify data in
  // the string

  std::string str3{"The Phoenix King"};
  const char *wrapped_c_string{str3.c_str()};

  std::cout << "wrapped_c_string: " << wrapped_c_string << std::endl;
  // wrapped_c_string[0] = 'e'; Compiler Error

  std::cout << '\n';

  // You can also use data() for the same thing
  std::cout << "data method :" << std::endl;

  std::string str4{"The Phoenix King"};
  char *w_c_string_data{str4.data()};

  return 0;
}
