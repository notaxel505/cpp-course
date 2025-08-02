#include <iostream>

int main() {
  std::cout << "std::isalnum :" << std::endl;

  std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
  std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;

  // Can use this as a test condition
  char input_char{'*'};
  if (std::isalnum(input_char)) {
    std::cout << input_char << " is alphanumeric" << std::endl;
  } else {
    std::cout << input_char << " is not alphanumeric" << std::endl;
  }
  std::cout << "----------------------------------------" << std::endl;

  // Check if a character is blank
  std::cout << "std::isblank: " << std::endl;

  char message[]{"Hello there. How are you doing? The sun is shining."};

  std::cout << "message: " << message << std::endl;

  // Find and print blank index
  size_t blank_count{};

  for (size_t i{}; i < std::size(message); ++i) {
    if (std::isblank(message[i])) {
      std::cout << "Found a blank character at index : [" << i << "]"
                << std::endl;

      ++blank_count;
    }
  }

  std::cout << "In total we found " << blank_count << " blank characters"
            << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  std::cout << "std::islower and std::isupper :" << std::endl;

  char thought[]{
      "The C++ Programming Language is one of the most used on the Planet"};

  size_t lowercase_count{};
  size_t uppercase_count{};

  // Print original string for ease of comparison on the terminal
  std::cout << "Original string: " << thought << std::endl;

  for (auto character : thought) {
    if (std::islower(character)) {
      ++lowercase_count;
    }
    if (std::isupper(character)) {
      ++uppercase_count;
    }
  }

  std::cout << "Found " << lowercase_count << " lowercase characters and "
            << uppercase_count << " uppercase characters" << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  // Check if a character is a digit
  std::cout << "std::isdigit :" << std::endl;

  char statement[]{
      "Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed"};

  std::cout << "statement: " << statement << std::endl;

  size_t digit_count{};

  for (auto character : statement) {
    if (std::isdigit(character)) {
      ++digit_count;
    }
  }

  std::cout << "Found " << digit_count << " in the statement string"
            << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  std::cout << "std::tolower and std::toupper :" << std::endl;

  char original_str[]{"Home. The feeling of belonging"};
  char changed_str[std::size(original_str)];

  // Turn this to lowercase
  for (size_t i{}; i < std::size(original_str); ++i) {
    changed_str[i] = std::tolower(original_str[i]);
  }

  std::cout << "Original string: " << original_str << std::endl;
  std::cout << "Lowercase string: " << changed_str << std::endl;

  std::cout << std::endl;

  // Turn this to uppercase
  for (size_t i{}; i < std::size(original_str); ++i) {
    changed_str[i] = std::toupper(original_str[i]);
  }

  std::cout << "Original string: " << original_str << std::endl;
  std::cout << "Uppercase string: " << changed_str << std::endl;

  return 0;
}
