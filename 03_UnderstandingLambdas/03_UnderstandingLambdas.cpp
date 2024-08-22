template<typename First, typename Second>
struct pair_1 {
	First first;
	Second second;
};

template<typename First, typename Second>
struct pair_2 {
	template<typename First_, typename Second_>
	pair_2(First &&first_, Second_ &&second_) :
		first(std::forward<First_>(first_)),
		second(std::forward<Second_>(second_))
	{}

	First first;
	Second second;
};