/* Lambdas as custom comparators. */
#include <string>
#include <set>

struct MyData
{
	std::string key;
	std::string value2;
};

int main()
{
	std::set < MyData, decltype([](const auto& lhs, const auto& rhs) {
		return lhs.key < rhs.key;
		}) > myset;
}