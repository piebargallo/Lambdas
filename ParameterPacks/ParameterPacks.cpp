#include <utility>
#include <iostream>

template<typename Callable, typename ... Param>
auto bind_values(Callable callable, Param ... param)
{
	return [callable = std::move(callable), ...my_param = std::move(param)]() {
		return callable(my_param...);
	};
}

int add(int lhs, int rhs)
{
	return lhs + rhs;
}

int main()
{
	const auto bound = bind_values(add, 1, 1);
	std::cout << bound() << std::endl;
	return 0;
}