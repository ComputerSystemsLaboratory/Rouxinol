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

lli n;
mat g;

lli u,k,v;

queue<lli> q;
queue<lli> d;
vbl vis;
vll ans;


int main(){
    cin >> n;
    g = mat(n+1);
    vis = vbl(n+1);
    ans = vll(n+1,-1);
    for(lli i = 0;i < n;i++){
        cin >> u >> k;
        for(lli j = 0;j < k;j++){
            cin >> v;
            g[u].push_back(v);
        }
    }
    q.push(1);
    d.push(0);
    while(!q.empty()){
        lli p = q.front();
        lli r = d.front();
        q.pop();
        d.pop();
        if(vis[p]) continue;
        vis[p] = true;
        ans[p] = r;
        for(lli i = 0;i < g[p].size();i++){
            if(!vis[g[p][i]]) q.push(g[p][i]),d.push(r+1);
        }
    }
    for(lli i = 1;i <= n;i++) cout << i << " " << ans[i] << endl;
    return 0;
}