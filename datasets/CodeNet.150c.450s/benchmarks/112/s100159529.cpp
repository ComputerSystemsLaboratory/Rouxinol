//https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Prelim/0501?year=2006

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while (cin >> n, n) {
        map<char, char> mp;
        for (int i = 0; i < n; ++i) {
            char x, y;
            cin >> x >> y;
            mp[x] = y;
        }

        int m;
        cin >> m;

        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            if (mp[c] != 0) {
                cout << mp[c];
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}

/*
 *
 */
