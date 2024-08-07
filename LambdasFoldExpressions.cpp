/* Lambdas in fold expressions*/

#include <iostream>

template<typename ... T>
auto do_stuff(T ... t)
{
	return ([t]() { return t; }() + ...);
}

int main()
{
	std::cout << do_stuff(1, 2, 3, 4, 5, 6) << std::endl;
	return 0;
}

// Output 21