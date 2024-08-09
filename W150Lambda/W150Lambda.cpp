/* Lambdas for resource. */
#include <memory>

int main()
{
	auto deleter = [](FILE* f) { fclose(f); };
	auto file = std::unique_ptr<FILE, decltype(deleter)>
		(fopen("SomeFile.txt", "w")
		);
}