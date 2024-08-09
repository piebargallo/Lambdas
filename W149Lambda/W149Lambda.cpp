/* Lambda usability changes. */

int main()
{
	auto l = [] { return 4; };
	auto m = l;

	// C++ 20
	decltype([] {}) n;
}