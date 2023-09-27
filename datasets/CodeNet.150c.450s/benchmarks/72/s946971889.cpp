#include<iostream>
#include<cctype>
using namespace std;

int main() {
    char c;
    while (true) {
        scanf("%c", &c);
        if (c == '\n') {
            cout << endl;
            break;
        }

        if (!isalpha(c)) {
            cout << c;
        } else if (islower(c)) {
            cout << (char) toupper(c);
        } else {
            cout << (char) tolower(c);
        }
    }
}