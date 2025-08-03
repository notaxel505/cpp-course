#include <iostream>
#include <string>

int main() {
  // Concatenating two strings : The + operator
  std::cout << "Concatenating two strings :" << std::endl;

  std::string str1{"Hello"};
  std::string str2{"World"};

  std::string message{str1 + " my " + str2};

  std::cout << "message: " << message << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "Concatenating string literals : No, No - Compiler Error"
            << std::endl;

  // Concatenating string literals : No, No - Compiler Error. String literals
  // are expanded into const *char arrays and C++ doesn't know how to add arrays
  // with the + operator. Hence the compiler error

  // std::string str3{"Hello" + "World"}; Compiler Error
  // std::string str4 = "Hello" + "World"; Compiler Error
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "A few ways around string literal concatenation :" << std::endl;

  std::string str5{"Hello World"}; // Make the string one literal

  std::string str6{
      "Hello"
      " World"}; // Put the literals side by side without the + in between

  std::string str7{std::string{"Hello"} +
                   " World"}; // Turn one or both into a std::string

  std::cout << "str5: " << str5 << std::endl;
  std::cout << "str6: " << str6 << std::endl;
  std::cout << "str7: " << str7 << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "std::string_literals :" << std::endl;

  using namespace std::string_literals; // Necesary for the s suffix

  std::string str8{
      "Hello"s + " World"}; // Turn one or both into strings using the s suffix

  std::cout << "str8: " << str8 << std::endl;

  // A better way to not pollute the namespace
  std::string str9;
  {
    str9 = "Hello"s + "World";
  }

  std::cout << "str9: " << str9 << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "Using the append method :" << std::endl;

  // std::string is a compound type, it has properties and behaviors
  // one of the behaviors is append. We access the behaviors using the .
  // operator after the std::string variable name

  std::string str10{"Hello"};
  std::string str11{" World"};

  std::string str12{str10.append(str11)};

  std::cout << "str12: " << str12 << std::endl;

  std::string str13{std::string{"Hello"}.append(" World")};

  std::cout << "str13: " << str13 << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "Append method can do more than + operator :" << std::endl;

  // Append can do more than + operator. The + operator is just a convenience
  // for basic concatenation

  std::string str14{"Hello "};
  std::string str15{str14.append(5, '?')}; // Appends 5 '?' characters

  std::cout << "str15: " << str15 << std::endl;
  std::cout << std::endl;

  std::string str16{"The world is our shared home."};
  std::string str17{"Hello"};

  std::string str18{
      str17.append(str16, 4, 5)}; // Append a sub-section of another string

  std::cout << "str18: " << str18 << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "Concatenating strings and characters :" << std::endl;

  std::string str19{"Hello"};
  std::string str20{"World"};

  std::string str21{str19 + ' ' + str20};

  std::cout << "str21: " << str21 << std::endl;

  std::string str22{"Hello"};

  (str22 += ',') += ' ';

  str22 += "world";

  std::cout << "str22: " << str22 << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "Appending C-strings and char arrays :" << std::endl;

  char message1[]{"World"};
  const char *message2{"World"};

  std::string hello{"Hello "};

  std::cout << " + char array: " << hello + message1 << std::endl;
  std::cout << " + C-String: " << hello + message2 << std::endl;
  std::cout << "append char array: " << hello.append(message1) << std::endl;
  std::cout << "append C-String: " << hello.append(message2) << std::endl;
  std::cout << "-----------------------------------------" << std::endl;

  std::cout << "Concatenating std::strings and numbers :" << std::endl;

  std::string str23{"Hello"};

  str23 += std::to_string(67.5f);

  std::cout << "str23: " << str23 << std::endl;

  return 0;
}
