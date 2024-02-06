#include <iostream>

int main()
{
	// Uso directo con parámetros
	std::cout << [](double a, double b) { return (a + b); }(5, 4);  // 9
	return 0;
}