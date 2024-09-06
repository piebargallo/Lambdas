#include <vector>
#include <functional>

struct my_lambda {
	int value;
	int operator()(int i) {
		return i + value;
	}
};

auto make_lambda(int value) -> my_lambda {
	return my_lambda(value);
}

using lambda_vector = std::vector<my_lambda>;

auto make_lambda_vector() -> lambda_vector
{
	lambda_vector vec;
	vec.push_back(make_lambda(1));
	vec.push_back(make_lambda(2));
	return vec;
}

int main()
{
	auto data = make_lambda_vector();

	data.push_back(make_lambda(1));
	data.push_back(make_lambda(2));
}