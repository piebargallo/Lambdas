#include <iostream>

int main()
{
	// Captura por referencia en lista
	int c{ 25 };
	std::cout << "&c ex: " << &c << std::endl;
	auto imprimir = [&c]() { std::cout << "&c in: " << &c << std::endl; }; // 0x3e6ddffb9c
	imprimir(); // 0x3e6ddffb9c
	return 0;
}