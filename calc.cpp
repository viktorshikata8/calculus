#include "calc.h"

#include <iostream> 

float calc(float x, float y, char op) {

	float result = 0;

	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '/':
		result = x / y;
		break;
	case '*':
		result = x * y;
		break;
	}
	return result;
}
void calculus() {
	char op = 0;
	float x = 0;
	float y = 0;
	std::cin >> x >> op >> y;
	float result = calc(x, y, op);
	std::cout << result << std::endl;
}