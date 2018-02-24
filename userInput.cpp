#include <array>
#include <functional>
#include <iostream>
#include <string>

void SignIn();
void SignUp();

constexpr std::size_t LOGIN_MENU_SIZE = 3;

std::array<std::string, LOGIN_MENU_SIZE> loginMenuStr =
{
	"1. Sign in",
	"2. Sign up",
	"3. Exit"
};

std::array<std::function<void()>, LOGIN_MENU_SIZE - 1> loginMenuFuncs =
{
	SignIn,
	SignUp
};

void SignIn()
{
	std::cout << "Select Sign In!\n";
}

void SignUp()
{
	std::cout << "Select Sign Up!\n";
}

template<std::size_t SIZE>
void ShowMenu(std::array<std::string, SIZE>& menus)
{
	std::cout << "========================================\n";
	for (auto& menu : menus)
	{
		std::cout << menu.c_str() << '\n';
	}
	std::cout << "========================================\n";
}

size_t InputMenuNum(std::string questionStr, size_t menuSize)
{
	while (true)
	{
		std::cout << questionStr;
		size_t num;
		std::cin >> num;

		if (num < 1 || num > menuSize)
		{
			std::cout << "Invalid number! Try again.\n";
		}
		else
		{
			return num;
		}
	}
}


int Login()
{
	ShowMenu(loginMenuStr);
	const size_t selectedNum = InputMenuNum("Select: ", LOGIN_MENU_SIZE);
	bool isFinish = false;

	if (selectedNum != LOGIN_MENU_SIZE)
	{
		loginMenuFuncs[selectedNum - 1]();
	}
	else
	{
		isFinish = true;
	}

	return isFinish ? 0 : Login();
}

int main()
{
	Login();

	return EXIT_SUCCESS;
}