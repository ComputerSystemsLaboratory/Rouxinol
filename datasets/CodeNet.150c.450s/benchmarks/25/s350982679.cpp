#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    char c;
    int cnt[26] = {};

    while (cin >> c) {
        if (isalpha(c)) {
            c = tolower(c);
            cnt[c - 'a']++;
        }
    }

    REP(i, 26) {
        printf("%c : %d\n", i + 'a', cnt[i]);
    }
    return 0;
}