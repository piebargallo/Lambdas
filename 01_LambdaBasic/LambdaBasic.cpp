#include <iostream>
#include <string>



int main()
{
	
	// Basic lambda
	auto basicLambda{ [] { std::cout << "Hello from Lambda" << std::endl; } };
	basicLambda();

	return 0;

}
