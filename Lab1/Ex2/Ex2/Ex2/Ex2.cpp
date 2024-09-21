// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a = 150;
    float b = 15.933;
    unsigned char c = 250;
    std::cout << "a = " << a << " b = " << b << " c = " << static_cast<int>(c);
    int day = 9;
    std::string month = u8"мая";
    int year = 2005;
    std::cout << u8"\nМоя дата рождения: " << day << " " << month << " " << year << u8" года \n";
    const double first = 2.3;
    const std::string second = "WINDOWS";
    std::cout << first << " " << second;

}
