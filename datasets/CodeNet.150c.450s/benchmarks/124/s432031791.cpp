#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;
typedef vector<map<lli,lli> > graph;

lli n;
graph g;
lli u,k,v,c;
priority_queue<pll,vector<pll>,greater<pll> > q;
vbl vis;
vll ans;

int main(){
    cin >> n;
    g = graph(n);
    for(lli i = 0;i < n;i++){
        cin >> u >> k;
        for(lli i = 0;i < k;i++){
            cin >> v >> c;
            g[u][v] = c;
        }
    }
    vis = vbl(n);
    ans = vll(n);
    q.push(pll(0,0));
    while(!q.empty()){
        lli d = q.top().first;
        lli p = q.top().second;
        q.pop();
        if(vis[p]) continue;
        vis[p] = true;
        ans[p] = d;
        for(auto itr = g[p].begin();itr != g[p].end();itr++){
            if(!vis[itr->first]) q.push(pll(d+itr->second,itr->first));
        }
    }
    for(lli i = 0;i < n;i++) cout << i << " " << ans[i] << endl;
    return 0;
}