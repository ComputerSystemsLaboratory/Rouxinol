#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char c;
    int numbers[26] = {0};
    int num;

    while (cin >> c) {
        if (isupper(c)) c = tolower(c);
        num = c - 'a';
        numbers[num]++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c : ", i+97);
        cout << numbers[i] << endl;
    }
    return 0;
}