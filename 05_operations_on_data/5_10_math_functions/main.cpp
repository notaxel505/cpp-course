#include <iostream>
#include <cmath>

int main() {
	int option {};
	double num1 {}, num2 {};

	while (option != 10) {
		std::cout << "1.- Abs function" << std::endl;
		std::cout << "2.- Floor function" << std::endl;
		std::cout << "3.- Ceil function" << std::endl;
		std::cout << "4.- Exp function (e^x)" << std::endl;
		std::cout << "5.- Pow function (x^y)" << std::endl;
		std::cout << "6.- Ln function" << std::endl;
		std::cout << "7.- Log10 function" << std::endl;
		std::cout << "8.- Sqrt function" << std::endl;
		std::cout << "9.- Round function" << std::endl;
		std::cout << "10.- Exit" << std::endl;
		std::cout << "Insert a number: ";
		std::cin >> option;

		switch(option) {
			case 1:
				std::cout << "ABS Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "abs(" << num1 << ") = " << std::abs(num1) << std::endl;
			break;
			case 2:
				std::cout << "Floor Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "floor(" << num1 << ") = " << std::floor(num1) << std::endl;
			break;
			case 3:
				std::cout << "Ceil Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "ceil(" << num1 << ") = " << std::ceil(num1) << std::endl;
			break;
			case 4:
				std::cout << "Exp Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "exp(" << num1 << ") = " << std::exp(num1) << std::endl;
			break;
			case 5:
				std::cout << "Pow Function" << std::endl;
				std::cout << "Insert the value of the base: ";
				std::cin >> num1;
				
				std::cout << "Insert the value of the power: ";
				std::cin >> num2;

				std::cout << "pow(" << num1 << ", " << num2 << ") = " << std::pow(num1, num2) << std::endl;
			break;
			case 6:
				std::cout << "Ln Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "ln(" << num1 << ") = " << std::log(num1) << std::endl;
			break;
			case 7:
				std::cout << "Log10 Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "log10(" << num1 << ") = " << std::log10(num1) << std::endl;
			break;
			case 8:
				std::cout << "Sqr Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "sqrt(" << num1 << ") = " << std::sqrt(num1) << std::endl;
			break;
			case 9:
				std::cout << "Round Function" << std::endl;
				std::cout << "Insert a number: ";
				std::cin >> num1;

				std::cout << "round(" << num1 << ") = " << std::round(num1) << std::endl;
			break;
			case 10:
			break;
			default:
				std::cout << "You didn't insert a valid number" << std::endl;
			break;
		}
	}	
return 0;
}
