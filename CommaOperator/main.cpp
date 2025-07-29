#include <iostream>

int get_value() {
  int a = 1, b = 2, c = 3;

  /*In functions the comma operator evaluates from left to right the values, but
    only the last value is returned*/
  return a, b, c;
}

int main() {
  std::cout << "FIRST EXAMPLE" << std::endl;
  // Comma separate multiples variables of the same type in a single declaration
  int a = 1, b = 2, c = 3;
  std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
  std::cout << "-------------------------------" << std::endl;

  std::cout << "SECOND EXAMPLE" << std::endl;
  /*Comma operators evaluates a and b. The value of i is equals to the last
    expression, which is b. Other expressions before the last expression will
    be evaluated but it won't be the value of "i"*/
  int i = (a, b);
  std::cout << "i: " << i << std::endl; // i: 2
  std::cout << "-------------------------------" << std::endl;

  std::cout << "THIRD EXAMPLE" << std::endl;
  /*We can access variables from the outer scope. In case we declare a variable
    with the same name in the inner scope, it will shadow the outer scope
    variable. Basically we couldn't access to the variable from the outer scope
    in the inner scope.
  */
  {
    int i = a, b;
    // i = 1
    // b = Garbage Data
    std::cout << "i: " << i << ", b: " << b
              << std::endl; // i: 2, b: (Garbage Data)
  }

  std::cout << "i: " << i << ", b: " << b << std::endl; // i: 2, b: 2
  std::cout << "-------------------------------" << std::endl;

  std::cout << "FOURTH EXAMPLE" << std::endl;
  /*The first expression (a += 2) is evaluated and discarded. The second
    expression (a + b) is evaluated and its result is assigned to "i". Commas
    act as a separator in the first line and an operator in the second line.*/
  i = (a += 2, a + b);
  // i = 5
  // a = 3

  std::cout << "i: " << i << ", a: " << a << std::endl; // i: 5, a: 3
  std::cout << "-------------------------------" << std::endl;

  std::cout << "FIFTH EXAMPLE" << std::endl;
  /*Without parentheses the commas act as separators, allowing multiples
    assignments and declarations. The order is left to right*/
  a = 1, b = 2, c = 3;

  /*Only the first assignment is going to affect "i", other expressions
    won't change anything*/
  i = a += 2, a + b;

  std::cout << "i: " << i << ", a: " << a << ", b: " << b << std::endl;
  std::cout << "-------------------------------" << std::endl;

  std::cout << "SIXTH EXAMPLE" << std::endl;
  std::cout << "get_value(): " << get_value() << std::endl;
  std::cout << "-------------------------------" << std::endl;

  std::cout << "SEVENTH EXAMPLE" << std::endl;
  /*The last expression is the condition that the "if" will use.
    Other expressions will be evaluated but they will be discarded*/
  if (a = 1, b = 2, c = 3, c < 3, a < 2) {
    std::cout << "a: " << a << std::endl;
  }

  return 0;
}
