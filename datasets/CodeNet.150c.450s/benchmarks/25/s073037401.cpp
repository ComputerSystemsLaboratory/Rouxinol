#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    string l;

    array<int32_t, 27> count = {0};

    while (cin >> l) {
        for (uint8_t c : l) {
            if ('A' <= c && c <= 'Z') {
                count[c - 'A']++;
            } else if ('a' <= c && c <= 'z') {
                count[c - 'a']++;
            }
        }
    }

    for (uint8_t c = 'a'; c <= 'z'; c++) {
        cout << c << " : " << count[c - 'a'] << endl;
    }

    return 0;
}