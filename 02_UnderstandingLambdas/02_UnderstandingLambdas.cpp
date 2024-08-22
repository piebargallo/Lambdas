// Can you implement this this higher order function in C++98

auto add = [](const auto& lhs, const auto& rhs) {
	return lhs + rhs;
};

auto lazy = [](const auto& func, const auto& lhs, const auto& rhs) {
	return [func, lhs, rhs]() {
		return func(lhs, rhs);
	};
};

int main(int argc, const char *[])
{
	auto l = lazy(add, argc, 4);
	return l();
}

