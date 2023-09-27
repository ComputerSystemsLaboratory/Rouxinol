#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    while (cin >> n >> m, n) {
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        vector<int> b(m);
        rep(j, m) cin >> b[j];

        int sma = accumulate(all(a), 0);
        int smb = accumulate(all(b), 0);

        const int INF = 999999;
        int ansa = INF;
        int ansb = INF;
        rep(i, n) {
            rep(j, m) {
                if (sma - a[i] + b[j] == smb - b[j] + a[i] && a[i] + b[j] < ansa + ansb) {
                    ansa = a[i];
                    ansb = b[j];
                }
            }
        }

        if (ansa < INF) {
            cout << ansa << " " << ansb << endl;
        } else {
            cout << -1 << endl;
        }


    }
}