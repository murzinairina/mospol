

#include <iostream>

int main()
{
    setlocale(0, "");
    float a, b;
    std::cout << "Введите a и b:"<<"\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Среднее арифметическое чисел a и b равно: ";
    std::cout << (a + b) / 2 << "\n";
}

