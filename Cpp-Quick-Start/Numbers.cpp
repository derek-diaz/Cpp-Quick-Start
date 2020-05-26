#include <iostream>

int main() {
	//Simple App that gets an input and prints it to the console
	int number;
	std::cout << "Enter a number between 1 and 100: ";
	std::cin >> number;
	std::cout << "Here's the number you typed: " << number << std::endl;
	return 0;
}