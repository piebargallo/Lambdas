#include <iostream>

int main()
{
	// Captura por valor en lista
	double a{ 10 }, b{ 15 };
	auto suma = [a, b]() { std::cout << "a+b: " << a + b; };
	suma(); // a+b: 25
	return 0;
}