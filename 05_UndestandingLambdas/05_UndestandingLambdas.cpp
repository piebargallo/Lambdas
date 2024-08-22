struct add {
	template<typename Param>
	Param operator()(const Param& lhs, const Param& rhs) const {
		return lhs + rhs;
	}

	template<typename LHS, typename RHS>
	struct Return_Type {
		typedef LHS type;
	};
};

struct lazy {
	template<typename Func, typename LHS, typename RHS>
	struct Inner {
		Func func_;
		LHS lhs_;
		RHS rhs_

		Inner(const Func &f, const LHS &l, const RHS &r)
			: func_(f), lhs_(l), rhs_(r) {}

		typename Func::template Return_Type<LHS, RHS>::type operator()() const {
			return func_(lhs_rhs_);
		}
			
		};
		template<typename Func, typename LHS, typename RHS>
		Inner<Func, LHS, RHS> operator()(const Func& func, const LHS& lhs, const RHS& rhs) const {
			return Inner<Func, LHS, RHS>{ func, lhs, rhs };
		}
	};

	int main(int argc, const char* []) {}