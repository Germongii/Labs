

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
	switch (str) {//принимаем значение переменной
		case '+'://проверка на случай если это +
			std::cout << a + n;//выводим сумму
			break;//заканчиваем этот кейс
		case '-'://если пользователь ввел -
			std::cout << a - n; // в этом случае выводим разность
			break;// Заканчиваем кейс
		case '*':// если пользователь ввелд*
			std::cout << a * n; // Вывводим произведение
			break;// Заканчиваем этот кейс
		case '/':// Если пользователь ввел /
			std::cout << a / n;// выводим результат деления
			break;

	}
}

