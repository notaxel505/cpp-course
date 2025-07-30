#include <iostream>

int main() {
  // char *message{"Hello World!!"}; Compiler error
  // Literal String
  const char *message{"Hello World!!"};
  std::cout << "message : " << message << std::endl;

  // *message = 'h'; Compiler error
  std::cout << "*message : " << *message << std::endl;

  // Allow programmers to modify the string
  char message2[]{"Hello World!!"};
  *message2 = 'h';
  std::cout << "message2 : " << message2 << std::endl;
  
  return 0;
}
