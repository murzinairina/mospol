
#include <iostream>

int main()
{
    setlocale(0, "");
    int a, b;
    std::cout << "Введите стороны прямоугольника:" <<"\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Площадь прямоугольника равна: ";
    std::cout << a * b << "\n";
    std::cout << "Параметр прямоугольника равен: ";
    std::cout << (a + b) * 2 << "\n";

    
}

