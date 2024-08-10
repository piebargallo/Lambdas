// Fibonacci with recursive lambdas.

#include <iostream>

auto f1_ = [](const auto f1, const auto f2, int input) {
	if (input < 2) {
		return 1;
	}
	return input + f2(f1, f2, input - 1);
};

auto f2_ = [](const auto f1, const auto f2, int input) {
	if (input < 2) {
		return input * 2;
	}
	return input + f1(f1, f2, input - 1);
};

int main()
{
	std::cout << f1_(f1_, f2_, 2) << std::endl;
	return 0;
}

// Output 4