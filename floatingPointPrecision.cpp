#include <cstdint>
#include <iomanip>
#include <iostream>

template<typename Type>
void printResult(const std::string& label, const Type t)
{
	std::cout << std::boolalpha;
	std::cout << "\t" << label.c_str() << ": " << std::setw(12) << t << std::endl;
}

int main()
{
	std::cout << "Precision" << std::endl;

	std::float_t f{ 0.0f };

	printResult("The value of f is ", f);

	printResult("(f == 0)        ? ", f == 0);

	for (size_t i = 0; i < 10; ++i)
	{
		f += 0.1f;
	}

	printResult("The Value of f is ", f);

	printResult("(f == 1)        ? ", f == 1);

	return EXIT_SUCCESS;
}