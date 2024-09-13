struct lambda {
	[[nodiscard]]
	static constexpr auto operator()() {
		return 42;
	}
};

int main()
{
	auto l = [] [[nodiscard]]
		([[maybe_unused]] auto value) { return 42; };
		return l(12);
}