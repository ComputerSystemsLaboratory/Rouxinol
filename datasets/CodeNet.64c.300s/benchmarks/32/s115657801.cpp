#include<iostream>
#include<limits.h>

using namespace std;

int main () {
    int n;
    long c, m = LONG_MAX, M = LONG_MIN, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c < m) {
            m = c;
        }
        if (c > M) {
            M = c;
        }
        t += c;
    }
    cout << m << " " << M << " " << t << endl;

    return 0;
}