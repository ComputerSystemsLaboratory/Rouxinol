#include <bits/stdc++.h>

using namespace std;

constexpr int INF = (1 << 29);

int main()
{
    int N;
    while (cin >> N, N) {
        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        int res = INF;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                res = min(res, abs(a[i] - a[j]));
            }
        }
        cout << res << endl;
    }
    return 0;
}