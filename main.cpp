#include <iostream>
#include "translate.h"

int main() {
    int num;

    std::cout << "Введите число: ";
    std::cin >> num;

    std::string turk_name = translate(num);
    std::cout << turk_name << std::endl;

    return 0;
}
