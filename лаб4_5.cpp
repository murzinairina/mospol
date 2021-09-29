#include <iostream>
#include <cmath>

int main()
{
    setlocale(0, "");
    int a, b;
    std::cout << "Введите a и b: " << "\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Сумма модулей чисел равна: " << "\n";
    std::cout << abs(a) + abs(b) << "\n";
    std::cout << "Разность модулей чисел равна: " << "\n";
    std::cout << abs(a) - abs(b) << "\n";
    std::cout << "Произведение модулей чисел равно: " << "\n";
    std::cout << abs(a) * abs(b) << "\n";
    std::cout << "Частное модулей чисел равно: " << "\n";
    float c = a;
    float d = b;
    std::cout << abs(c) / abs(d) << "\n";
}