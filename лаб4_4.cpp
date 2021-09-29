
#include <iostream>
#include <cmath>

int main()
{
    setlocale(0, "");
    int a, b;
    std::cout << "Введите a и b: " << "\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Сумма квадратов чисел равна: " << "\n";
    std::cout << pow(a,2) + pow(b,2) << "\n";
    std::cout << "Разность квадратов чисел равна: " << "\n";
    std::cout << pow(a, 2) - pow(b, 2) << "\n";
    std::cout << "Произведение квадратов чисел равно: " << "\n";
    std::cout << pow(a, 2) * pow(b, 2) << "\n";
    std::cout << "Частное квадратов чисел равно: " << "\n";
    std::cout << pow(a, 2) / pow(b, 2) << "\n";
}

