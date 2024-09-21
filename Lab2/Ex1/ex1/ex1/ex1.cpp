// ex1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	int n;
	int a;
	std::cin >> n;
	std::cin >> a;
	std::cout << (a + n) / 2;
	char str;
	std::cout << u8"Введите один из знаков +, -, * или /\n";
	std::cin >> str;
	switch (str) {
		case '+':
			std::cout << a + n;
			break;
		case '-':
			std::cout << a - n;
			break;
		case '*':
			std::cout << a * n;
			break;
		case '/':
			std::cout << a / n;
			break;

	}
}

