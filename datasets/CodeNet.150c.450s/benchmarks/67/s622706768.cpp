#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int N;
int f(int n) { return n * (n - 1) / 2; }
int calc(int s, int t) { return f(t + 1) - f(s); }
int main() {
    while (cin >> N, N) {
        int ans = 0;
        rep(i, N + 1) rep(j, N + 1) if (i && i < j) {
            if (N == calc(i, j)) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}