#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef long long ll;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fi first
#define se second

const int MAXN = 1e5;
const int INF = 1e9;
vi adj[MAXN+1];
int dist[MAXN+1];
int sa[MAXN+1];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n+1; ++i)
    {
        dist[i]=INF;
        sa[i] = INF;
    }

    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dist[1] = 0;
    queue<int> q;
    q.push(1);

    while(!q.empty())
    {
        int tren = q.front();
        q.pop();

        for(auto e : adj[tren])
        {
            if(dist[e] == INF)
            {
                dist[e] = dist[tren] + 1;
                sa[e] = tren;
                q.push(e);
            }
        }
    }

    bool ok = 1;
    for(int i = 2; i <= n; ++i)
    {
        if(sa[i]==INF)
        {
            ok = 0;
            break;
        }
    }

    if(!ok)
    {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";

    for(int i = 2; i <= n; ++i)
        cout << sa[i] << '\n';
}
