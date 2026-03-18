#include <iostream>
using namespace std;

/* Function that erase spaces before
and after string input */

string Trim (string input) {
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            input.erase(i, 1);
            i--;
        }
    }
    return input;
}