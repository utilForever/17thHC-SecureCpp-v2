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
	std::cout << "Conversions" << std::endl;

	std::float_t f{ std::numeric_limits<std::float_t>::max() };

	printResult("max float...............", f);

	std::double_t d{ std::numeric_limits<std::double_t>::max() };

	printResult("max double..............", d);

	f = d;

	printResult("double to float.........", f);

	std::int32_t i32 = f;

	printResult("float to 32-bit signed..", i32);

	return EXIT_SUCCESS;
}