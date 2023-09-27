#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    while (cin >> N >> K, N) {
        vector<int> a(N);
        int sum = 0, res = -(1e9);
        for (int i = 0; i < K; i++) {
            cin >> a[i];
            sum += a[i];
        }

        res = max(res, sum);
        for (int i = K; i < N; i++) {
            cin >> a[i];
            sum += a[i] - a[i-K];
            res = max(res, sum);
        }
        cout << res << endl;
    }
    return 0;
}