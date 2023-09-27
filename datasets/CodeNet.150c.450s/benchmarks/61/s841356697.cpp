#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B, C, X;
    while (cin >> N >> A >> B >> C >> X, N) {
        int ans = 0;
        for (int i = 0; i < N; i++) {
            int Y;
            cin >> Y;

            if (i != 0) {
                X = (A * X + B) % C;
                ans++;
            }
            while (true) {
                if (X == Y)
                    break;

                X = (A * X + B) % C;
                ans++;
                if (ans > 10000)
                    break;
            }
        }
        if (ans > 10000)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}