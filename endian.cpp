#include <iostream>

template<class T, std::size_t... N>
constexpr T EndianSwapImpl(T i, std::index_sequence<N...>)
{
	return ((((i >> (N * CHAR_BIT)) & static_cast<T>(static_cast<unsigned char>(-1))) << ((sizeof(T) - 1 - N) * CHAR_BIT)) | ...);
};

template<class T, class U = typename std::make_unsigned<T>::type>
constexpr U EndianSwap(T i)
{
	return EndianSwapImpl<U>(i, std::make_index_sequence<sizeof(T)>{});
}

int main()
{
	const std::int32_t num = 50;
	
	std::cout << num << '\n';
	std::cout << EndianSwap(num) << '\n';

	return EXIT_SUCCESS;
}