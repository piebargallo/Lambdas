#include <vector>

int main()
{
	{
		auto lambda{ [] <typename T> (const std::vector<T>&values) {
			T someValue{ };
			//T::some_static_function();
	} };

		std::vector values{ 1, 2, 100, 5, 6 };
		lambda(values);
	}

	return 0;
}
