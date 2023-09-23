#include <bits/stdc++.h>

using namespace std;

int n, ball[10];

bool solve(int idx, int l, int r) {

    if(idx == 10) return true;

    bool ret = false;
    if(ball[idx] > l) ret = ret || solve(idx + 1, ball[idx], r);
    if(ball[idx] > r) ret = ret || solve(idx + 1, l, ball[idx]);
    return ret;

}

int main() {

    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 10; ++j) {
            cin >> ball[j];
        }
        cout << (solve(0, 0, 0) ? "YES" : "NO") << endl;
    }

}