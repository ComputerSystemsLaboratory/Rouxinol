#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define repp(i, m, n) for(int i = m; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef long long ll;
typedef pair<int, int> pai;
typedef pair<ll,ll> pal;
int e[101][101];
int t;
pai edge[10001];
int c[10001];
int sz[10001];
int n;
int P[10001];
int ans;
int x, y;
void init(int k)
{
    repp(i, 1, k+1)
    {
        P[i]=i;
        sz[i]=1;
    }
}
int root(int a)
{
    if(P[a]==a)
    {
        return a;
    }
    else
    {
        return (P[a]=root(P[a]));
    }
}
bool is_same_set(int a, int b)
{
    return (root(a)==root(b));
}
void unite(int a, int b)
{
    if(sz[root(a)]<sz[root(b)])
    {
        swap(a, b);
    }
    sz[root(a)]+=sz[root(b)];
    P[root(b)]=root(a);
}
int main()
{
    cin >> n;
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> e[i+1][j+1];
        }
    }
    t=0;
    rep(i, n)
    {
        repp(j, i+1, n)
        {
            if((i<j)&&(e[i+1][j+1]!=-1))
            {
                edge[t]=make_pair(e[i+1][j+1]*1000+i+1, j+1);
                //cout << edge[t].first << ' ' << j+1 << ' ' << t << endl;
                t++;
            }
        }
    }
    sort(edge, edge+t);
    //rep(i, t)
    //{
    //	cout << edge[i].first << ' ' << edge[i].second << endl;
    //}
    rep(i, t)
    {
        c[i]=edge[i].first / 1000;
        edge[i]=make_pair(edge[i].first%1000, edge[i].second);
        // cout << c[i] << ' ' << edge[i].first << ' ' << edge[i].second << endl;
    }
    init(n);
    ans=0;
    rep(i, t)
    {
    if(!is_same_set(edge[i].first, edge[i].second))
        {
            unite(edge[i].first, edge[i].second);
            ans+=c[i];
            // cout << edge[i].first << ' ' << edge[i].second << ' ' << i << ' ' << ans << endl;
        }
    }
    cout << ans << endl;
    return 0;
}