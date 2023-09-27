#include <bits/stdc++.h>
#define ll long long int
#define mod_ceil(a, b) (a % b) ? a / b + 1 : a / b
using namespace std;

#define o5 100100
#define o12 1000000000000

ll n, m;
vector<ll> G[o5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b, tmp;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }

    // bfs
    queue<ll> Q;
    vector<ll> source(n, -1);
    Q.push(0);
    while (!Q.empty())
    {
        tmp = Q.front();
        Q.pop();
        for (ll j = 0; j < G[tmp].size(); j++)
        {
            a = G[tmp][j];
            if (source[a] == -1)
            {
                Q.push(a);
                source[a] = tmp;
            }
        }
    }
    source[0] = 0;
    bool possible = find(source.begin(), source.end(), -1) == source.end();
    if (possible)
    {
        cout << "Yes" << endl;
        for (ll i = 1; i < n; i++)
        {
            cout << source[i] + 1 << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
}