//https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Prelim/0511?year=2007

#include <bits/stdc++.h>

using namespace std;

int main() {
    bool submit[31] = {};
    
    for (int i = 0; i < 28; ++i) {
        int t;
        cin >> t;
        submit[t] = true;
    }

    for (int i = 1; i <= 30; ++i) {
        if (!submit[i]) cout << i << endl;
    }
    return 0;
}

/*
 *
 */
