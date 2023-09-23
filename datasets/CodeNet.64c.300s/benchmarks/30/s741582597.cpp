#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N, N) {
        N = 1000 - N;
        int v[] = {500, 100, 50, 10, 5, 1};

        int ans = 0;
        for (int i = 0; i < 6; i++) {
            ans += N / v[i];
            N %= v[i];
        }

        cout << ans << endl;
    }

    return 0;
}