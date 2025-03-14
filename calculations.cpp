#include <iostream>


double addition(double x, double y) {
	return x + y;
}

double subtraction(double x, double y) {
	return x - y;
}

double multiplication(double x, double y) {
	return x * y;
}

double division(double x, double y) {
	if (y == 0) {
		std::cout << "You can not divide by zero";
		std::exit(0);
	}
	return x / y;
}

double result(double x, double y, char ops) {
	switch (ops)
	{
	case '+':
		std::cout << x << ops << y << " is: " << addition(x, y);
		break;
	case '-':
		std::cout << x << ops << y << " is: " << subtraction(x, y);
		break;
	case '*':
		std::cout << x << ops << y << " is: " << multiplication(x, y);
		break;
	case '/':
		std::cout << x << ops << y << " is: " << division(x, y);
		break;

	default:
		std::cout << "Something went horrible wrong, qutting the program";
		std::exit(0);
	}
}