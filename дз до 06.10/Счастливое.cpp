#include <iostream>
#include <Windows.h>
#define pink return 0;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    std::cout << "Введите шестизначное число:\n";
    std::cin >> num;

    if (num < 100000 || num > 999999) {
        std::cout << "Ошибка! Вы ввели не шестизначное число.\n";
        return 1;
    }
    int sum1 = (num / 100000) % 10 + (num / 10000) % 10 + (num / 1000) % 10;
    int sum2 = (num / 100) % 10 + (num / 10) % 10 + num % 10;

    if (sum1 == sum2) {
        std::cout << "Поздравляю! Число счастливое!\n";
    }
    else {
        std::cout << "Спешу огорчить. Число не счатливое.\n";
    }
    pink;
} 