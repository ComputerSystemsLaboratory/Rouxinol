#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"
#include "numeric"
#include "cassert"
#include "ctime"

using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(begin, i, end) for (int i = begin; i < (int)(end); i++)
#define all(v) v.begin(), v.end()
const int MOD = 1000000007;

int main()
{
    ll D;
    cin >> D;

    vector<ll> c(26);
    rep(0, i, 26)
    {
        cin >> c.at(i);
    }

    vector<vector<ll>> s(D, vector<ll>(26, 0));
    rep(0, i, D)
    {
        rep(0, j, 26)
        {
            cin >> s.at(i).at(j);
        }
    }

    ll t;
    ll score = 0;
    vector<vector<ll>> d(D + 1, vector<ll>(26, 0));
    vector<ll> ans(D);
    rep(0, i, D)
    {
        cin >> t;
        t--;
        score += s.at(i).at(t);

        rep(0, j, 26)
        {
            d.at(i + 1).at(j) = d.at(i).at(j) + 1;
        }
        d.at(i + 1).at(t) = 0;

        rep(0, j, 26)
        {
            score -= c.at(j) * d.at(i + 1).at(j);
        }
        ans.at(i) = score;
    }

    rep(0, i, D)
    {
        cout << ans.at(i) << endl;
    }
}
