#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <stack>
#include <queue>
#include <iomanip>
#include <set>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main()
{
    ll D;
    cin >> D;
    vector<ll> c(27);
    vector<vector<ll>> s(D+1, vector<ll>(27));
    for (int i = 1; i <= 26; ++i) cin >> c[i];
    for (int i = 1; i <= D; ++i)
    {
        for (int j = 1; j <= 26; ++j)
        {
            cin >> s[i][j];
        }
    }
    vector<ll> t(D+1);
    for (int i = 1; i <= D; ++i) cin >> t[i];
    vector<ll> res(D+1, 0);
    vector<ll> last(27, 0);
    for (int d = 1; d <= D; ++d)
    {
        res[d] += res[d - 1] + s[d][t[d]];
        last[t[d]] = d;
        for (int k = 1; k <= 26; ++k)
        {
            res[d] -= c[k] * (d - last[k]);
        }
    }
    for (int d = 1; d <= D; ++d)
    {
        cout << res[d] << endl;
    }
    return 0;
}
