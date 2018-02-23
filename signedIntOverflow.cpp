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
	std::cout << "Signed int overflow" << std::endl;

	std::int32_t i{ std::numeric_limits<std::int32_t>::max() };

	printResult("max signed   ", i);

	i++;

	printResult("overflow (++)", i);

	i = std::numeric_limits<std::int32_t >::min();

	printResult("min signed   ", i);

	i--;

	printResult("overflow (--)", i);

	return EXIT_SUCCESS;
}