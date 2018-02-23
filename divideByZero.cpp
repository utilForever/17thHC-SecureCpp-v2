#include <cstdint>
#include <iomanip>
#include <iostream>
#include <limits>

template<typename IntType>
void printResult(const std::string& label, const IntType t)
{
	std::cout << "\t" << label.c_str() << ": " << std::setw(12) << t << std::endl;
}

int main()
{
	std::cout << "Divide by zero" << std::endl;

	std::uint32_t ui32{ std::numeric_limits<std::uint32_t>::max() };

	printResult("Divide by zero is ...", ui32 / 0);

	return EXIT_SUCCESS;
}