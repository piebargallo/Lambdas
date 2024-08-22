#include <utility>
#include <vector>
#include <cstdio>

template<typename First, typename Second>
struct pair_1 {
	First first;
	Second second;
};

template<typename First, typename Second>
struct pair_2 {
	template<typename First_, typename Second_>
	pair_2(First&& first_, Second_&& second_) :
		first(std::forward<First_>(first_)),
		second(std::forward<Second_>(second_))
	{}

	First first;
	Second second;
};

struct Helper {
	Helper() { std::puts("Helper()"); }
	~Helper() { std::puts("~Helper()"); }
	Helper(const Helper&) { std::puts("Helper(Helper &&)"); }
	Helper &operator=(const Helper &) { std::puts("operator=(const Helper &)"); return *this; }
	Helper& operator=(Helper&&) { std::puts("operator=(const Helper &&)"); return *this; }
};

int main()
{
	pair_1<Helper, Helper> p1{ Helper{}, Helper{} };
	pair_2<Helper, Helper> p2{ Helper{}, Helper{} };
	return 0;
}