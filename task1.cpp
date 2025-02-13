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
    std::cout << "Задача 1: Вычисление z = sqrt(|x^y - cos(y)|)" << std::endl;

    // Ввод и проверка значений x и y
    double x = getInput("Введите значение x: ");
    double y = getInput("Введите значение y: ");

    // Вычисление z
    double z = sqrt(fabs(pow(x, y) - cos(y)));
    std::cout << "Значение z: " << z << std::endl;

    return 0;
}