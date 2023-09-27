#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

using namespace std;

int alphas[26];

int main(void) {

    string line;
    while (getline(cin, line)) {
        for (int i = 0; i < line.size(); ++i) {
            char ch = line[i];
            if (isalpha(ch)) {
                ++alphas[toupper(ch) - 'A'];
            }
        }
    }

    for (int i = 0; i < 26; ++i) {
        printf("%c : %d\n", i + 'a', alphas[i]);
    }

    return 0;
}