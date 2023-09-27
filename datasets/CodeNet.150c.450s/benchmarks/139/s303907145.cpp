#include <bits/stdc++.h>
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < (ll)b; ++i)
#define digit(a) to_string(a).size()
#define INF 10e12
#define MAX 51000
#define all(x) (x).begin(), (x).end()
#define MX(x) *max_element(all(x))
#define MN(x) *min_element(all(x))
using namespace std;
int main(void)

{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n);
    vector<ll> dis(n, (ll)INF), prev(n);
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    priority_queue<ll> q;
    q.push(0);
    dis[0] = 0;
    ll cta = 1;
    while (!q.empty())
    {
        int temp = q.top();
        q.pop();
        for (auto i : v[temp])
        {
            if (dis[i] > dis[temp] + 1)
                dis[i] = dis[temp] + 1, q.push(i), prev[i] = temp, ++cta;
        }
    }
    if (cta < n)
        cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;
        rep(i, 1, n) printf("%lld\n", prev[i] + 1);
    }
}
