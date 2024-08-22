struct add {
	template<typename LHS, typename RHS>
	auto operator()(const LHS& lhs, const RHS& rhs) const -> decltype(lhs + rhs)
	{
		return lhs + rhs;
	}
};

struct lazy {
	template<typename Func, typename LHS, typename RHS>
		struct Inner {
			Func func_;
			LHS lhs_;
			RHS rhs_

			auto operator()() const -> decltype(func_(lhs_rhs_)) {
				return func_(lhs_, rhs_);
			};
	template<typename Func, typename LHS, typename RHS>
	Inner<Func, LHS, RHS> operator()(const Func& func, const LHS& lhs, const RHS& rhs) const {
		return Inner<Func, LHS, RHS>{ func, lhs, rhs };
	}
};

int main(int argc, const char* []) 
{}