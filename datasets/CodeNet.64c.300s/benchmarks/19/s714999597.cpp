#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int N;
    while (cin >> N, N) {
        ll res = -114514;
        bool ok = 0;
        vector<ll> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            res = max(res, a[i]);
        }

        if (res > 0) ok = 1;
        
        ll sum = 0;
        for (int i = 0; i < N; i++) {
            sum += a[i];
            if (sum < 0) sum = 0;
            if (ok) {
                res = max(res, sum);
            }
        }
        cout << res << endl;
    }
    return 0;
}