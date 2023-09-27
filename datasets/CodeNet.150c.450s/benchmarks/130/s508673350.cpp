#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)

#define int64 int64_t
#define uint64 uint64_t
#define uint unsigned

vector<uint64> mul(const vector<vector<int> >& a,const vector<int>& b)
{
    vector<uint64> ret;
    REP(i, a.size())
        ret.push_back(inner_product(a[i].begin(), a[i].end(), b.begin(), 0));
    return ret;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> b(m);
    vector< vector<int> > a(n, vector<int>(m));
    REP(i, n)
        REP(j, m)
            cin >> a[i][j];
    REP(i, m)
        cin >> b[i];

    auto ans = mul(a, b);
    REP(i, ans.size())
        cout << ans[i] << '\n';
}