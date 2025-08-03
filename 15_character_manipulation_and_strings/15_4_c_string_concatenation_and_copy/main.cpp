#include <cstring>
#include <iostream>

int main() {
  std::cout << "std::strcat :" << std::endl;

  char str[50]{"Hello "};
  char str2[50]{"World!"};

  std::strcat(str,
              str2); // Some compilers (MSVC) think these functions are unsafe!

  std::cout << "dest: " << str << std::endl;

  std::strcat(str, " Goodbye World!");

  std::cout << "dest: " << str << std::endl;
  std::cout << "---------------------------------" << std::endl;

  // std::strncat : concatenates n characters from src to dest and returns a
  // pointer to the result string.
  // signatures : char *strncat( char *dest, const char *src, std::size_t count
  // );

  std::cout << "std::strncat :" << std::endl;

  char dest[50]{"Hello"};
  char src[30]{" There is a bird on my window"};

  // You can even use the returned pointer immediately for print out. This is a
  // pattern you'll see a lot in C++ code out there.
  std::cout << std::strncat(dest, src, 6) << std::endl;

  // Or you can do std::strncat separetely and print dest
  std::strncat(dest, src, 6);
  std::cout << "The concatenated string is: " << dest << std::endl;
  std::cout << "---------------------------------" << std::endl;

  // std::strcpy - signature : char* strcpy( char* dest, const char* src );
  std::cout << "std::strcpy :" << std::endl;

  const char *source{"C++ is a multipurpose programming language."};
  char *dest1 = new char[std::strlen(source) + 1]; // +1 for the null character

  std::strcpy(dest1, source);

  std::cout << "sizeof(dest1): " << sizeof(dest1) << std::endl;
  std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
  std::cout << "dest1: " << dest1 << std::endl;

  delete[] dest1;
  dest1 = nullptr;
  std::cout << "---------------------------------" << std::endl;

  // std::strncpy : Copy n characters from src to dest.
  // signature : char *strncpy( char *dest, const char *src, std::size_t count);
  std::cout << "std::strncpy :" << std::endl;

  const char *source1{"Hello"};
  char dest2[]{"abcdef"};

  std::strncpy(dest2, source1, 1);

  std::cout << "dest2: " << dest2 << std::endl;

  return 0;
}
