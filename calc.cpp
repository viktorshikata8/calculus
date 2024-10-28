#include"calc.h"
float x, y;
char p;
float result;
float calc(float x, float y) {
	switch (p) {
	case '+': result = x + y;
		break;
	case '-': result = x - y;
		break;
	case '/': result = x / y;
		break;
	case '*': result = x * y;
		break;
	}
	return result;
}
void calculus() {
	std::cin >> x >> p >> y;
	calc(x, y);
	std::cout << result << std::endl;
}