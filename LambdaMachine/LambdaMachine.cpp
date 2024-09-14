#include <utility>

int main()
{
	auto fib = [i = 0, j = 1]() mutable {
		i = std::exchange(j, i + j);
		return i;
		};
	fib();
	fib();
	return fib();
}