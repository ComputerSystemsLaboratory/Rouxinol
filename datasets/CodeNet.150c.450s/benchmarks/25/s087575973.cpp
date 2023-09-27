#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int dict[26] = {};
    char c;
    while (cin >> c) {
        if (!isalpha(c)) continue;

        if (isupper(c)) c = tolower(c);
        dict[c - 'a'] += 1;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c : %d\n", 'a' + i, dict[i]);
    }
}