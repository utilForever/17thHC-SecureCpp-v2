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
	std::cout << "Unsigned int wrap" << std::endl;

	std::uint32_t unsignedInt{ std::numeric_limits<std::uint32_t>::max() };

	printResult("max unsigned", unsignedInt);

	unsignedInt++;

	printResult("wrapped (++)", unsignedInt);

	unsignedInt = std::numeric_limits<std::uint32_t>::min();

	printResult("min unsigned", unsignedInt);

	unsignedInt--;

	printResult("wrapped (--)", unsignedInt);

	return EXIT_SUCCESS;
}