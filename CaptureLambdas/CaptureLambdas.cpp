#include <string>
#include <iostream>
#include <string_view>

template<typename ... String>
void work_with_string_like_things(const String & ... string)
{
	auto l = [...strlike = std::_String_val{ string }]() {
		((std::cout << strlike.size() << ' ' << strlike << '\n'), ...);
		};
}

int main()
{
	work_with_string_like_things("Hello World", std::string{ "Jason was here" },
		std::string_view{ "doing some C++ weekly stuff" });
}