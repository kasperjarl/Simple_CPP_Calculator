#include <iostream>
#include "get_stuff.h"

void ignoreLine() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double get_number() {
	while (true) {

		std::cout << "Enter a number: ";
		double num{};
		std::cin >> num;

		if (!std::cin) {
			std::cin.clear();
			ignoreLine();
			std::cout << "You can not enter a character, try again\n";
			continue;
		}

		std::cin.clear();
		ignoreLine();
		return num;
	}
	
}

char get_operator() {
	
	while (true) {
		std::cout << "Pick an operator: '+', '-', '*', '/': ";

		char ops{};
		std::cin >> ops;
		ignoreLine();

		switch (ops) {
		case '+':
		case '-':
		case '*':
		case '/':
			std::cin.clear();
			return ops;
		default:
			std::cout << "wrong operations. Try again.\n";
		}
	}
}