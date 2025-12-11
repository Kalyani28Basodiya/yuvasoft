#include <iostream>
using namespace std;

int main() {

    char str[] = "HELLO WORLD";
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] != ' ') {  
            cout << str[i];
        }
    }

    return 0;
}
