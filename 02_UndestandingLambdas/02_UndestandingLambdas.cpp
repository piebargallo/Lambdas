#include <utility>
#include <vector>

// 1) Come up with reasons for wanting lambda to function 
// pointer conversion
extern "C" {
	void use_callback(int (*)(int));
}

void func() {
	use_callback([](int i) { return i + 2; });
}

void use_functions()
{
	std::vector<int (*)(int, int)> vec;
	vec.push_back([](int i, int j) { return i + j; });
	vec.push_back([](int i, int j) { return i * j; });
}

// 2) Ponder the practical applications of inheriting from lambdas
// direct access to operator ()()

struct Fib
{
	int n0 = 0;
	int n1 = 1;

	/* int operator()() {
		n0 = std::exchange(n1, n0 + n1);
		return n0; */
	constexpr int operator()() {
		const int oldn1 = n1;
		n1 = n0 + n1;
		n0 = oldn1;
		return n0;
	}
};

int main()
{
	// Implemented in C++98
	auto fib = [n0 = 0, n1 = 1]() mutable { n0 = std::exchange(n1, n0 + n1); return n0; };
	fib();
	return fib();
}