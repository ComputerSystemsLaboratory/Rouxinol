#include <iostream>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define int long long
inline int in() {int32_t x ; scanf("%d",&x) ; return x ; }
inline string getStr() {char ch[200000] ; scanf("%s",ch) ; return ch ; }
inline char getCh() {char ch ; scanf(" %c",&ch) ; return ch;}
template<class P, class Q> inline P smin(P &a, Q b) { if (b < a) a = b; return a; }
template<class P, class Q> inline P smax(P &a, Q b) { if (a < b) a = b; return a; }
const int MOD = 1e9 + 7;
const int MAX_N = 1e5 + 10;
const int MA_LG = 21;
const int base = 29;
vector< pair<int,int> > g[MAX_N];
int res[MAX_N];
bool vis[MAX_N];
int32_t main()
{
    int n = in() , m = in() , source = in();
    for (int i = 0 ; i < m ; i ++)
    {
        int v = in() , u = in() , w = in();
        g[v].push_back({u,w});
    }
    for (int v = 0 ; v < n ; v ++)
        res[v] = 1e18;
    res[source] = 0;
    priority_queue<pair<int , int >> pq;
    pq.push({0,source});
    res[source] = 0;
    while (!pq.empty())
    {
        int v = pq.top().second;
        int di = -pq.top().first;
        pq.pop();
        if (vis[v] && res[v] <= di) continue;
        vis[v] = true;
        res[v] = di;
        for (int pt = 0 ; pt < g[v].size() ; pt ++)
        {
            int u = g[v][pt].first , w = g[v][pt].second;
            if (res[u] > w + di)
            {
                if (vis[u] && w + di < 0)
                {
                    cout << "NEGATIVE CYCLE\n";
                    exit(0);

                }
//                res[u] = w + di;
                pq.push({-w-di , u});
            }
        }
    }
    for (int i = 0 ; i < n ; i ++)
    {
        if (res[i] >= 1e18)
        {
            cout << "INF\n";
        }else
        cout << res[i] << "\n";
    }
    
}