#include <iostream>

int main() {
	
	{
		double pi{ 3.1415 };
		auto myLambda{ [myCapture = "Pi: ", pi] { std::cout << myCapture << pi; } };
		myLambda();
	}

	return 0;

}
