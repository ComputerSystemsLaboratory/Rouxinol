#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main(void) {

    char cards[201];
    int N;
    while (true) {
        cin >> cards;
        if (cards[0] == '-') { break; }
        cin >> N;

        int total = 0;
        for (int _ = 0, n; _ < N; ++_) {
            cin >> n;
            total += n;
        }
        size_t len = strlen(cards);
        rotate(cards, cards + total % len, cards + len);

        printf("%s\n", cards);
    }

    return 0;
}