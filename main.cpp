#include <iostream>
#include "greeting.h"
#include "get_stuff.h"
#include "calculations.h"


int main() {
	greeeting();

	double x{ (get_number()) };
	char ops{ get_operator() };
	
	double y{ (get_number()) };
	
	double res{ result(x, y, ops) };

	return 0;
}