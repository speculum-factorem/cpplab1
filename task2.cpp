#include <iostream>
#include <cmath>
#include <limits>

// Функция для безопасного ввода числа
double getInput(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            break;
        } else {
            std::cout << "Ошибка ввода. Пожалуйста, введите число." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return value;
}

int main() {
    std::cout << "Задача 2: Вычисление y в зависимости от x" << std::endl;

    // Ввод и проверка значения x
    double x = getInput("Введите значение x: ");

    // Вычисление y в зависимости от x
    double y;
    if (x < -2.5) {
        y = pow(sin(5 * pow(x, 2) + 3 * x + 1), 5);
    } else if (x >= -2.5 && x < 4) {
        y = x * sin(4 * x - 1);
    } else {
        y = exp(-6 * x) + 8;
    }

    std::cout << "Значение y: " << y << std::endl;

    return 0;
}