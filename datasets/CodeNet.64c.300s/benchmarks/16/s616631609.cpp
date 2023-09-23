#include<iostream>
#include<limits.h>

using namespace std;

int main() {
    long n, m, M, c, d = LONG_MIN;
    cin >> n;
    for (long i = 0; i < n; i++) {
        cin >> c;
        if (i == 0) {
            m = M = c;
            continue;
        }
        if (c < m) {
            if (c - M > d) {
                d = c - M;
            }
            m = M = c;
            continue;
        }
        if (c > M) {
            M = c;
        }
        if (M - m > d) {
            d = M - m;
        }
    }
    cout << d << endl;
    return 0;
}