#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M, N || M) {
        vector<long long int> v(N);
        for (int i = 0; i < N; i++) {
            cin >> v[i];
            if (i > 0) v[i] += v[i-1];
        }

        long long int ans = -10000000000;
        for (int i = 0; i < N - M; i++) {
            ans = max(ans, v[i+M] - v[i]);
        }

        cout << ans << endl;
    }

    return 0;
}