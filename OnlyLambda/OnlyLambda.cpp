#include<vector>
#include<iostream>

int main()
{
	auto flat_map = [my_map_thing =
		[]() {
		struct NewType {};
		return NewType{};
		}(),
			data = std::vector<std::pair<int, int>>()]
			(auto &&... input_key) mutable -> auto& {
		if constexpr (sizeof...(input_key) == 1) {
			for (auto& item : data) {
				if (item.first == (input_key, ...)) {
					return item.second;
				}
			}
			return data.emplace_back((input_key, ...), 0).second;
		}
		else {
			return data;
		}
		};
	flat_map(1) = 42;
	flat_map(2) = 100;

	for (const auto& [key, value] : flat_map()) {
		std::cout << key << ' ' << value << '\n';
	}
}