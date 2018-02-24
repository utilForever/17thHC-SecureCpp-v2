#include <cstdint>
#include <iomanip>
#include <iostream>
#include <limits>

template<typename Type>
void printResult(const std::string& label, const Type t)
{
	std::cout << "\t" << label.c_str() << ": " << std::setw(12) << t << std::endl;
}

int main()
{
	std::cout << "Domain and range error" << std::endl;

	printResult("sqrt(3)...............", std::sqrt(3));

	printResult("sqrt(-2)..............", std::sqrt(-2));

	printResult("sinh(3)...............", std::sinh(3));

	printResult("sinh(4000)............", std::sinh(4000));

	return EXIT_SUCCESS;
}