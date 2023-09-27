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

lli v,e,r;
mat g;
mat d;
lli x,y,c;
priority_queue<pll,vector<pll>,greater<pll> > pq;
vbl vis;
vll ans;

int main(){
    cin >> v >> e >> r;
    g = d = mat(v);
    for(lli i = 0;i < e;i++){
        cin >> x >> y >> c;
        g[x].push_back(y);
        d[x].push_back(c);
    }
    pq.push(pll(0,r));
    vis = vbl(v);
    ans = vll(v,-1);
    while(!pq.empty()){
        x = pq.top().second;
        c = pq.top().first;
        pq.pop();
        if(vis[x]) continue;
        vis[x] = true;
        ans[x] = c;
        for(lli i = 0;i < g[x].size();i++){
            if(!vis[g[x][i]]) pq.push(pll(c+d[x][i],g[x][i]));
        }
    }
    for(lli i = 0;i < v;i++){
        if(ans[i] >= 0) cout << ans[i] << endl;
        else cout << "INF" << endl;
    }
    return 0;
}