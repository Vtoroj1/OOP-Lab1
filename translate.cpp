#include <iostream>
#include <vector>
#include "translate.h"

std::string translate(int num) {
    if (num < 0 || num > 99) {
        return "Недопустимое число (вне диапазона 0-99)";
    }

    const std::vector<std::string> unit = {
        "sıfır", "bir", "iki", "üç", "dört",
        "beş", "altı", "yedi", "sekiz", "dokuz"
    };

    const std::vector<std::string> tens = {
        "on", "yirmi", "otuz", "kırk", "elli",
        "altmış", "yetmiş", "seksen", "doksan"
    };

    if (num < 10) {
        return unit[num];
    }

    int tensN = num / 10;
    int unitN = num % 10;

    if (unitN == 0) {
        return tens[tensN - 1];
    }

    return tens[tensN - 1] + " " + unit[unitN];
}
