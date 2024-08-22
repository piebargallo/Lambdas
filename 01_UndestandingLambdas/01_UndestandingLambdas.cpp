#include <utility>

int main()
{
	// Implemented in C++98
	auto l = [n0 = 0, n1 = 1]() mutable { n0 = std::exchange(n1, n0 + n1); return n0; };
	l();
	return l();
}