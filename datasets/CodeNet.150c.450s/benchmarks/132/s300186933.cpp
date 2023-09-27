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

    int n, p;
    while (cin >> n >> p, n) {
        vector<int> v(n, 0);
        int pot = p;
        rep(r, 1000000) {
            int i = r % n;
            if (pot > 0) {
                pot--;
                v[i]++;
            } else {
                pot += v[i];
                v[i] = 0;
            }

            if (v[i] == p) {
                cout << i << endl;
                break;
            }
        }
    }
}