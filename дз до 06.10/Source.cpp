#include <iostream>
#include <Windows.h>
#define pink return 0;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    std::cout << "Введите четырехзначное число:\n ";
    std::cin >> num;

    if (num < 1000 || num > 9999) {
        std::cout << "Ошибка! Введите четырехзначное число.\n";
    }
    int first_num = num / 1000;
    int second_num = (num % 1000) / 100;
    int third_num = (num % 100) / 10;
    int fourth_num = num % 10;

    int new_number = second_num * 1000 + first_num * 100 + fourth_num * 10 + third_num;
   
    std::cout << "Новое число: " << new_number << std::endl;
    pink;
}