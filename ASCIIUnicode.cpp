#include <iostream>
#include <string>

int main()
{
	std::string messageA = "ASCII message";
	std::wstring messageW;

	// messageW = messageA;

	messageW.assign(messageA.begin(), messageA.end());
	std::wcout << messageW.c_str() << '\n';

	messageW = L"Unicode message";

	messageA.assign(messageW.begin(), messageW.end());
	std::cout << messageA.c_str() << '\n';

	return EXIT_SUCCESS;
}