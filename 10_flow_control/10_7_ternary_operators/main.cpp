#include <iostream>

int main() {
	int a {35};
	int b {200};

	std::cout << "max number: " << ((a > b) ? a : b) << std::endl;

	return 0;
}
