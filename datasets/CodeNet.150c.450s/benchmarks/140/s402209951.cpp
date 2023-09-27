#include <iostream>
#include <cstdio>
#include<algorithm>
#include <map>
#include <vector>
#include <set>
#define mp make_pair
#define pb push_back
using namespace std;
const int maxn = 10000 + 10;
bool mark[maxn];
vector<int> v[maxn], u[maxn];
int par[maxn];
vector<pair<int, pair<int,int> > > q;
int find(int x)
{
    int k = par[x] == -1 ? x : find(par[x]);
    return k;
}
void unio(int x, int y)
{
     int a = find(x), b = find(y);
     if(a < b)
          par[find(y)] = find(x);
     else
         par[find(x)] = find(y);
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
            par[i] = -1;
    for(int i=0;i<m;i++)
    {
            int a, b, c;
            cin >> a >> b >> c;
            //a--; b--;
            v[a].pb(b);
            v[b].pb(a);
            q.pb(mp(c,mp(a,b)));
    }
    //cerr << 1 << endl;
    sort(q.begin(), q.end());
    //cerr << 2 << endl;
    int edges = 0;
    int i = 0;
    long long sum = 0;
    while(edges < n-1)
    {
                int x = q[i].first;
                int a = q[i].second.first, b = q[i].second.second;
                //cerr << 3 << endl;
                if(find(a) != find(b))
                {
                           //cerr << 4 << endl;
                           unio(a,b);
                           //cerr << 5 << endl;
                           sum += x;
                           u[a].pb(b);
                           u[b].pb(a);
                           edges++;
                }
                i++;
                           
    }
    cout << sum << endl;
    return 0;
    //cin >> n;
}