#include <iostream>
#include <string>

int main() {
  std::string full_name; // Empty string

  std::string planet{"Earth. Where the sky is blue"};
  std::string prefered_planet{planet};

  std::string message{"Hello there",
                      5}; // Initialize with part of a string literal

  std::string weird_message(5, 'e'); // Initialize with multiple copies of a
                                     // char Contains hello

  std::string greeting{"Hello World"};

  std::string saying_hello{greeting, 6,
                           5}; // Initialize with part of an existing
                               // std::string. Starting at index 6, taking 5
                               // characters will contain World.

  std::cout << "full_name: " << full_name << std::endl;
  std::cout << "planet: " << planet << std::endl;
  std::cout << "prefered_planet: " << prefered_planet << std::endl;
  std::cout << "message: " << message << std::endl;
  std::cout << "weird_message: " << weird_message << std::endl;
  std::cout << "greeting: " << greeting << std::endl;
  std::cout << "saying_hello: " << saying_hello << std::endl;
  std::cout << std::endl;

  // Changing std::string at runtime
  planet = "Earth. Where the sky is blue. Where the sky is blue Earth. Where";
  std::cout << planet << std::endl;

  return 0;
}
