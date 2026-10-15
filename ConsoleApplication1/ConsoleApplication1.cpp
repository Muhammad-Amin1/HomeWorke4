#include <Windows.h>
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //-------------------задание 1-------------------

    std::cout << "-------------------задание 1 -------------------\n\n ";
    int num;
    std::cout << "Введите шестизначное число: ";
    std::cin >> num;

    if (num < 100000 || num > 999999) {
        std::cout << "Ошибка: число не шестизначное";
        return 0;
    }

    int a = num / 100000;
    int b = num / 10000 % 10;
    int c = num / 1000 % 10;
    int d = num / 100 % 10;
    int e = num / 10 % 10;
    int f = num % 10;

    if (a + b + c == d + e + f) {
        std::cout << "Число счастливое";
    }
    else {
        std::cout << "Число не счастливое";
    }
    //-------------------задание 2-------------------

    std::cout << "\n\n-------------------задание 2 -------------------\n\n ";
    int number;
    std::cout << "Введите четырехзначное число: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Ошибка: число не четырехзначное";
        return 0;
    }

    int one = number / 1000;
    int two = number / 100 % 10;
    int three= number / 10 % 10;
    int four = number % 10;

    std::cout << "Ответ: " << four * 1000 + three * 100 + two * 10 + one;

    //-------------------задание 3-------------------

    std::cout << "\n\n-------------------задание 3 -------------------\n\n ";
    int numb, max;

    std::cout << "Введите 7 целых чисел: ";
    std::cin >> max;

    for (int i = 1; i < 7; i++) {
        std::cout << "Введите: ";
        std::cin >> numb;

        if (numb > max) {
            max = numb;
        }
    }

    std::cout << "Максимальное число: " << max;

    return 0;
}



