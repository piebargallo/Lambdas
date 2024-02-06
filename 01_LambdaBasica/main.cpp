// Una fcn lambda o anónima es una fcn sin nombre,
// def y utilizada in-situ

#include <iostream>

int main()
{
	// Definición básica y uso
	auto hola = []() { std::cout << "Hola mundo!" << std::endl; };
	hola(); // Hola mundo!
	return 0;
}