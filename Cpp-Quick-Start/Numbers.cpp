#include <iostream>

int main() {
	//Simple App that gets an input and prints it to the console
	int number;
	std::cout << "Enter a number between 1 and 100: "; //Output to console
	std::cin >> number; //Grab input from console
	std::cout << "Here's the number you typed: " << number << std::endl; //Shows the value captured back in the console
	return 0;
}