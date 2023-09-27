#include <bits/stdc++.h>

const int INF = 1e9;
const int MOD = 1e9 + 7;

using namespace std;

typedef long long ll;

#define REP(i, n) for (int i = 0; i < int(n); i++)
#define REPD(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = a; i < int(b); i++)
#define FORD(i, a, b) for (int i = b - 1; i >= int(a); i--)
#define WRAP(y, x, h, w) (0 <= y && y < h && 0 <= x && x < w)

#define ALL(x) (x).begin(), (x).end()

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
    int n;
    cin >> n;
    vector<ll> vll(n);
    REP(i, n)
    cin >> vll[i];
    int q;
    cin >> q;
    vector<pair<ll, ll>> vq(q);
    REP(i, q)
    cin >> vq[i].first >> vq[i].second;
    ll ans = 0;
    vector<int> cnt(100001);
    REP(i, n)
    {
        ans += vll[i];
        cnt[vll[i]]++;
    }
    REP(i, q)
    {
        ans += (vq[i].second - vq[i].first) * cnt[vq[i].first];
        cnt[vq[i].second] += cnt[vq[i].first];
        cnt[vq[i].first] = 0;
        cout << ans << endl;
    }
}