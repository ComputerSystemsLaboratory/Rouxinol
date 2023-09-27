#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORN(i, a, b) for (int i = a; i <= b; i++)
#define P(s) cout << s << endl
#define PC(condition, _true, _false) if (condition) _true; else _false;
#define toInt(_char) _char - '0'

using namespace std;
//
// Created by karayuu on 2018-12-18.
//

int main() {
    while (true) {
        int n = 0;
        cin >> n;

        if (n == 0) break;

        int a[1001];
        FOR(i, 0, n) {
            cin >> a[i];
        }

        int dif = 999999999;

        FOR(i, 0, n) {
            FOR(j, i + 1, n) {
                dif = min(dif, abs(a[i] - a[j]));
            }
        }

        P(dif);
    }
}
