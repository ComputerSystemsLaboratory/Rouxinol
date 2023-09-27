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

int lis(vector<int>& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> dp(n + 1, INF);
    rep(i, n) *lower_bound(all(dp), a[i]) = a[i];
    return lower_bound(all(dp), INF) - dp.begin();
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    cout << lis(a) << endl;
}