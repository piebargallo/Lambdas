#include <iostream>
#include <string>

class Person
{
public:
	Person(std::string name) : m_name{ std::move(name) } { }
	const std::string& getName() const { return m_name; }

private:
	std::string m_name;
};

int main()
{
	// Basic lambda
	auto basicLambda{ [] { std::cout << "Hello from Lambda" << std::endl; } };
	basicLambda();

	// Lambda with parameters
	auto parametersLambda{ [](int value) { std::cout << "The value is " << value << std::endl; } };
	parametersLambda(42);

	return 0;
}
