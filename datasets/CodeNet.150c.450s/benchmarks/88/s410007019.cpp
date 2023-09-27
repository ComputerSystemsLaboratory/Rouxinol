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
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    set<vector<int>> s;
    rep2(h, 1, 150 + 1) {
        rep2(w, h + 1, 150 + 1) {
            s.insert(vector<int>{h * h + w * w, h, w});
        }
    }

    int h, w;
    while (cin >> h >> w, h) {
        auto t = *upper_bound(all(s), vector<int>{h * h + w * w, h, w});
        cout << t[1] << " " << t[2] << endl;
    }
}