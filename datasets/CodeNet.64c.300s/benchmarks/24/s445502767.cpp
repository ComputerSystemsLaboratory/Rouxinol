//https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Prelim/0500?year=2006

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int sumA = 0, sumB = 0;
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            if (a > b) {
                sumA += a + b;
            } else if (a < b) {
                sumB += a + b;
            } else {
                sumA += a;
                sumB += b;
            }
        }

        cout << sumA << " " << sumB << endl;
    }
    return 0;
}

/*
 *
 */
