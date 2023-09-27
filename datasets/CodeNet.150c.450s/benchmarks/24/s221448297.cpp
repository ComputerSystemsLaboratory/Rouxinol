#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i < (int)(b);++i)

using pi = pair<int, int>;
int main() {
    while (true) {
        int N, M;
        cin >> N >> M;
        if(N == 0)return 0;
        vector<pi> P(N);
        rep(i,N)
        {
            int a, b; cin >> a >> b;
            P[i] = pi(b, a);
        }
        sort(P.begin(), P.end());
        long long ans = 0;
        for(int i = N - 1; i >= 0; i--)
        {
            if(M >= P[i].second)
            {
                M -= P[i].second;
            }
            else
            {
                ans += P[i].first * (P[i].second - M);
                M = 0;
            }
        }
        cout << ans << endl;
    }
}

