#include <iostream>
using namespace std;

bool NumCheck(string num) {
    for (int i = 0; i < num.length(); i++) {
        if ((num[i] != '0') && (num[i] != '1') && (num[i] != '2') && (num[i] != '3') && (num[i] != '4') && 
        (num[i] != '5') && (num[i] != '6') && (num[i] != '7') && (num[i] != '8') && (num[i] != '9')) {
            return false;
        }
    }
    return true;
}

void NumPrintGorizontally(string num) {
    string digits[10][7] = {
            { "  ###  ", " #   # ", "#     #", "#     #", "#     #", " #   # ", "  ###  " }, // 0
            { "   #   ", "  ##   ", "   #   ", "   #   ", "   #   ", "   #   ", "  ###  " }, // 1
            { "  ###  ", " #   # ", "     # ", "   ##  ", "  #    ", " #     ", " ##### " }, // 2
            { "  ###  ", " #   # ", "     # ", "   ##  ", "     # ", " #   # ", "  ###  " }, // 3
            { "    #  ", "   ##  ", "  # #  ", " #  #  ", " ##### ", "    #  ", "    #  " }, // 4
            { " ##### ", " #     ", " #     ", " ####  ", "     # ", " #   # ", "  ###  " }, // 5
            { "  ###  ", " #     ", " #     ", " ####  ", " #   # ", " #   # ", "  ###  " }, // 6
            { " ##### ", "     # ", "    #  ", "   #   ", "  #    ", "  #    ", "  #    " }, // 7
            { "  ###  ", " #   # ", " #   # ", "  ###  ", " #   # ", " #   # ", "  ###  " }, // 8
            { "  ###  ", " #   # ", " #   # ", "  #### ", "     # ", "    #  ", "  ##   " }  // 9
        };
    
    for (int row = 0; row < 7; row++) {
        for (int i = 0; i < num.length(); i++) {
            int d = num[i] - '0';
            cout << digits[d][row] << "  "; // пробел между цифрами
        }
        cout << "\n";
    }
}

void NumPrintVertically(string num) {
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '0') {
            cout << "  ###  \n";
            cout << " #   # \n";
            cout << "#     #\n";
            cout << "#     #\n";
            cout << "#     #\n";
            cout << " #   # \n";
            cout << "  ###  \n\n";
        } else if (num[i] == '1') {
            cout << "   #   \n";
            cout << "  ##   \n";
            cout << "   #   \n";
            cout << "   #   \n";
            cout << "   #   \n";
            cout << "   #   \n";
            cout << "  ###  \n\n";
        } else if (num[i] == '2') {
            cout << "  ###  \n";
            cout << " #   # \n";
            cout << "     # \n";
            cout << "   ##  \n";
            cout << "  #    \n";
            cout << " #     \n";
            cout << " ##### \n\n";
        } else if (num[i] == '3') {
            cout << "  ###  \n";
            cout << " #   # \n";
            cout << "     # \n";
            cout << "   ##  \n";
            cout << "     # \n";
            cout << " #   # \n";
            cout << "  ###  \n\n";
        } else if (num[i] == '4') {
            cout << "    #  \n";
            cout << "   ##  \n";
            cout << "  # #  \n";
            cout << " #  #  \n";
            cout << " ##### \n";
            cout << "    #  \n";
            cout << "    #  \n\n";
        } else if (num[i] == '5') {
            cout << " ##### \n";
            cout << " #     \n";
            cout << " #     \n";
            cout << " ####  \n";
            cout << "     # \n";
            cout << " #   # \n";
            cout << "  ###  \n\n";
        } else if (num[i] == '6') {
            cout << "  ###  \n";
            cout << " #     \n";
            cout << " #     \n";
            cout << " ####  \n";
            cout << " #   # \n";
            cout << " #   # \n";
            cout << "  ###  \n\n";
        } else if (num[i] == '7') {
            cout << " ##### \n";
            cout << "     # \n";
            cout << "    #  \n";
            cout << "   #   \n";
            cout << "  #    \n";
            cout << "  #    \n";
            cout << "  #    \n\n";
        } else if (num[i] == '8') {
            cout << "  ###  \n";
            cout << " #   # \n";
            cout << " #   # \n";
            cout << "  ###  \n";
            cout << " #   # \n";
            cout << " #   # \n";
            cout << "  ###  \n\n";
        } else if (num[i] == '9') {
            cout << "  ###  \n";
            cout << " #   # \n";
            cout << " #   # \n";
            cout << "  #### \n";
            cout << "     # \n";
            cout << "    #  \n";
            cout << "  ##   \n\n";
        }
    }
}

int main () {
    string input;
    bool flag = true;
    string orient;
    cout << "Введите число для его печати в виде решеток: ";
    cin >> input;
    flag = NumCheck(input);
    if (flag) {
        cout << "Напечатать цифры вертикально или горизонтально? (\"v\" - вертикально, \"g\" - горизонтально): ";
        cin >> orient;
        if (orient == "v") {
            NumPrintVertically(input);
        } else if (orient == "g") {
            NumPrintGorizontally(input);
        } else {
            cout << "Неизвестная команда!" << "\n";
        }
    } else {
        cout << "Неправильный ввод!" << "\n";
    }
}