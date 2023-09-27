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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    while (cin >> N, N) {
        vector<P> v;
        v.emplace_back(0, 0);
        rep(i, N - 1) {
            int n, d;
            cin >> n >> d;
            int x = v[n].first + dx[d];
            int y = v[n].second + dy[d];
            v.emplace_back(x, y);
        }

        const int inf = 1e9;
        int x1 = -inf, x2 = inf, y1 = -inf, y2 = inf;
        for (auto& p : v) {
            x1 = max(x1, p.first);
            x2 = min(x2, p.first);
            y1 = max(y1, p.second);
            y2 = min(y2, p.second);
        }

        cout << x1 - x2 + 1 << " " << y1 - y2 + 1 << endl;
    }
}