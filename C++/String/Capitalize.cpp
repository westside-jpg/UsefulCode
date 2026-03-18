#include <iostream>
using namespace std;

/* Function that make first letter
uppercased and next letters lowercased */

string Capitalize (string input) {

    string upper[33] = {
    "А", "Б", "В", "Г", "Д", "Е", "Ё", "Ж", "З", "И", "Й", "К", "Л", "М", "Н",
    "О", "П", "Р", "С", "Т", "У", "Ф", "Х", "Ц", "Ч", "Ш", "Щ", "Ъ", "Ы", "Ь",
    "Э", "Ю", "Я"
    };

    string lower[33] = {
    "а", "б", "в", "г", "д", "е", "ё", "ж", "з", "и", "й", "к", "л", "м", "н",
    "о", "п", "р", "с", "т", "у", "ф", "х", "ц", "ч", "ш", "щ", "ъ", "ы", "ь",
    "э", "ю", "я"
    };

    bool found = false;
    for (int j = 0; (j < 33) && (!found); j++) {
        if (input.substr(0, 2) == lower[j]) {
            input.replace(0, 2, upper[j]);
            found = true;
        }
    }

    for (int i = 2; i < input.length(); i += 2) {
        bool found = false;
        for (int j = 0; (j < 33) && (!found); j++) {
            if (input.substr(i, 2) == upper[j]) {
                input.replace(i, 2, lower[j]);
                found = true;
            }
        }
    }

    return input;
}