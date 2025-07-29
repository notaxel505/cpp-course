#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  std::srand(std::time(0));

  char prediction_0[]{"You're gonna take a million of dollars."};
  char prediction_1[]{"Yor're gonna meet a famous."};
  char prediction_2[]{"A bear is gonna be into your house."};
  char prediction_3[]{"You're gonna learn C++"};
  char prediction_4[]{"You will be badass"};
  char prediction_5[]{"You're brother will give you money"};
  char prediction_6[]{
      "The love of your life will ask you to be his/her partner"};
  char prediction_7[]{"You are beatiful"};
  char prediction_8[]{"A random will ask you for money"};
  char prediction_9[]{"The love of your life will give you a kiss"};

  const int maximum_size{15};
  char name[maximum_size]{};
  char keep_playing{'Y'};

  while (keep_playing == 'Y') {
    std::cout << "What's your name (maximum " << maximum_size
              << " characters): ";

    std::cin.getline(name, maximum_size);

    std::cout << "Okay " << name << ", this is the prediction: ";
    
    int random_number {std::rand() % 11}; // [0 ~ 10]

    switch (random_number) {
      case 0:
        std::cout << prediction_0 << std::endl;
        break;
      case 1:
        std::cout << prediction_1 << std::endl;
        break;
      case 2:
        std::cout << prediction_2 << std::endl;
        break;
      case 3:
        std::cout << prediction_3 << std::endl;
        break;
      case 4:
        std::cout << prediction_4 << std::endl;
        break;
      case 5:
        std::cout << prediction_5 << std::endl;
        break;
      case 6:
        std::cout << prediction_6 << std::endl;
        break;
      case 7:
        std::cout << prediction_7 << std::endl;
        break;
      case 8:
        std::cout << prediction_8 << std::endl;
        break;
      case 9:
        std::cout << prediction_9 << std::endl;
        break;
    }

    std::cout << "Do you want to play again Y/N:";
    std::cin >> keep_playing;
  }

  return 0;
}
