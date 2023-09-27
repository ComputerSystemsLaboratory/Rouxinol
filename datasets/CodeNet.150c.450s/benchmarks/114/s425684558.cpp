#include <bits/stdc++.h>
#include <numeric>
#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG true
#define LL long long
#define Num 1000000007
// sort(a.begin(), a.end(), std::greater<int>());
using namespace std;
struct edge
{
    int to, cost;
};

typedef pair<int, int> P;
int main()
{
    int n;
    cin >> n;
    vector<edge> g[n];
    rep(i, n)
    {
        rep(j, n)
        {
            int temp = 0;
            edge ed;
            cin >> temp;
            if (temp == -1)
                ed.cost = INT_MAX;
            else
                ed.cost = temp;
            ed.to = j;
            g[i].push_back(ed);
        }
    }
    //solve by  fast prim
    bool used[n];
    int mincost[n];
    rep(i, n)
    {
        used[i] = false;
        mincost[i] = INT_MAX;
    }
    int ans = 0;
    mincost[0] = 0;
    priority_queue<P, vector<P>, greater<P>> que;
    que.push(P(0, 0));
    while (que.empty() == false)
    {
        auto p = que.top();
        que.pop();
        int v = p.second;
        if (mincost[v] < p.first || used[v] == true)
            continue;
        used[v] = true;
        ans += p.first;
        rep(i, g[v].size())
        {
            auto e = g[v][i];
            mincost[e.to] = min(mincost[e.to], e.cost);
            que.push(P(mincost[e.to], e.to));
        }
    }
    cout<<ans<<endl;
    return 0;
}
