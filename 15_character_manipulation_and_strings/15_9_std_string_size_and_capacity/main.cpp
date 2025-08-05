#include <iostream>
#include <string>

int main() {
  std::cout << "std::string::empty() :" << std::endl;

  std::string str1{"Hello World"};
  std::string str2;
  std::string str3;

  // Empty
  std::cout << std::boolalpha;
  std::cout << "str1 is empty: " << str1.empty() << std::endl;
  std::cout << "str2 is empty: " << str2.empty() << std::endl;
  std::cout << "str3 is empty: " << str3.empty() << std::endl;
  std::cout << '\n';

  // Size
  std::cout << "std::string::size() :" << std::endl;
  std::cout << "str1 contains " << str1.size() << " characters" << std::endl;
  std::cout << "str2 contains " << str2.size() << " characters" << std::endl;
  std::cout << "str3 contains " << str3.size() << " characters" << std::endl;
  std::cout << '\n';

  // Lenght
  std::cout << "std::string::lenght() :" << std::endl;
  std::cout << "str1 contains " << str1.length() << " characters" << std::endl;
  std::cout << "str2 contains " << str2.length() << " characters" << std::endl;
  std::cout << "str3 contains " << str3.length() << " characters" << std::endl;
  std::cout << '\n';

  // max_size : max numbers of characters a string can have on the system.
  std::cout << "std::string can hold " << std::string().max_size()
            << " characters" << std::endl;
  std::cout << "------------------------------------------------" << std::endl;

  std::cout << "std::string::capacity :" << std::endl;

  // Capacity
  std::string str4{"Hello World"};
  std::string str5;

  std::cout << "str4 capacity: " << str4.capacity() << std::endl;
  std::cout << "str5 capacity: " << str5.capacity() << std::endl;
  std::cout << '\n';

  str4 = "The sky is so blue, the grass is green. Kids are running all over "
         "the place";

  std::cout << "str4 size: " << str4.size() << std::endl;
  std::cout << "str4 capacity: " << str4.capacity() << std::endl;
  std::cout << '\n';

  std::cout << "Reserve : Update the capacity" << std::endl;

  str4.reserve(100);

  std::cout << "str4 size: " << str4.size() << std::endl;
  std::cout << "str4 capacity: " << str4.capacity() << std::endl;
  std::cout << "------------------------------------------------" << std::endl;

  std::cout << "Shrink to fit :" << std::endl;

  std::string str6{"Hello World"};

  str6.reserve(100);

  std::cout << "str6 capacity: " << str6.capacity() << std::endl;
  std::cout << "str6 size: " << str6.size() << std::endl;
  std::cout << '\n';

  str6.shrink_to_fit();

  std::cout << "str6 capacity: " << str6.capacity() << std::endl;
  std::cout << "str6 size: " << str6.size() << std::endl;

  return 0;
}
