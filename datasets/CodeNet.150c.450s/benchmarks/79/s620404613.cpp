#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, R;
    while (cin >> N >> R, N || R) {
        vector<int> v(N);
        for (int i = 0; i < N; i++) {
            v[i] = i+1;
        }

        while (R--) {
            int p, c;
            cin >> p >> c;
            auto w = v;
            for (int i = 0; i < p-1; i++) {
                w[N - p - c + i + 1] = v[N - p + i + 1];
            }

            for (int i = 0; i < c; i++) {
                w[N - c + i] = v[N - p - c + i + 1];
            }

            v = w;
        }

        cout << v[N-1] << endl;
    }

    return 0;
}

