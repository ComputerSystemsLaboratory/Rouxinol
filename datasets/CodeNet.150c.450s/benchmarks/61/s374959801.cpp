#include <algorithm>
#include <iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int N, A, B, C, X;
int Y[101];

int next(int x) { return (A * x + B) % C; }
void solve() {
    int cnt = 0;
    int ans;
    int pos = 0;
    while (1) {
        if (cnt == 10001) {
            cnt = -1;
            break;
        }
        if (X == Y[pos]) pos++;
        X = next(X);
        if (pos == N) break;
        cnt++;
    }
    cout << cnt << endl;
}

int main() {
    while (cin >> N >> A >> B >> C >> X) {
        if (N == 0) break;
        rep(i, N) cin>>Y[i];
        solve();
    }
}