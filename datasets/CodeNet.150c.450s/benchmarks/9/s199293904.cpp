#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int to_i(const string& str) {
    int res = 0;
    for (int i = 0; i < str.size(); ++i) {
        res = res * 10 + (str[i] - '0');
    }
    return res;
}


int main(void) {

    string cards, n;
    while (true) {
        cin >> cards;
        if (cards == "-") { break; }
        cin >> n;

        int total = 0;
        for (int _ = 0, N = to_i(n); _ < N; ++_) {
            cin >> n;
            total += to_i(n);
        }
        rotate(cards.begin(), cards.begin() + total % cards.size(),
               cards.end());

        printf("%s\n", cards.c_str());
    }

    return 0;
}