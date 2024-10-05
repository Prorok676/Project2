#include <iostream>
#include <Windows.h>
#define pink return 0;
int main (){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 int num1, num2, num3, num4, num5, num6, num7, max;
 std::cout << "Введите 7 чисел:\n";
 std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;
 max = num1;

  if (num2 > max) {
    max = num2;
  }
  if (num3 > max) {
    max = num3;
  }
  if (num4 > max) {
    max = num4;
  }
  if (num5 > max) {
    max = num5;
  }
  if (num6 > max) {
    max = num6;
  }
  if (num7 > max) {
    max = num7;
  }

std::cout << "Максимальное число:\n" << max << std::endl;
pink;
}