#include <iostream>
using namespace std;

#define если if
#define иначе else
#define для for
#define пустота void
#define целое int
#define строка string
#define или ||
#define запросить cin
#define вывести cout
#define отступ "\n"

пустота Replace(строка &str) {
    для (целое i = 0; i < str.length(); i++) {
        если ((str[i] == 'A') или  (str[i] == 'E') или (str[i] == 'I') или (str[i] == 'O') или (str[i] == 'U')
        или (str[i] == 'a') или  (str[i] == 'e') или (str[i] == 'i') или (str[i] == 'o') или (str[i] == 'u')) {
            str[i] = '!';
        }
    }
    вывести << str << отступ;
}
int main () {
    строка input;
    вывести << "Введите слово (на английском) для замены гласных на восклицательные знаки: ";
    запросить >> input;
    Replace(input);
}