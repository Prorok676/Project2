#include <iostream>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    char operation;
    std::cout << "������� 1 �����, ���� (+,-,*,/,%), 2 ����� :";
    std::cin >> num1 >> operation >> num2;

    if (operation == '+')
    {
        std::cout << "���������: " << num1 + num2 << "\n";
    }
    else if (operation == '-')
    {
        std::cout << "���������: " << num1 - num2 << "\n";
    }
    else if (operation == '*')
    {
        std::cout << "���������: " << num1 * num2 << "\n";
    }
    else if (operation == '/' && num2 !=0)
    {
        std::cout << "���������: " << num1 / num2 << "\n";

    }
    else if (operation == '%')
    {
     std::cout << "���������:" << num1 * num2 * 0.01;
    }
    
    return 0;
}