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
vll d;
vll f;
vbl vis;

lli u,k,v;
lli t = 0;

lli dfs(lli x,lli t){
    d[x] = t;
    vis[x] = true;
    for(lli i = 0;i < g[x].size();i++){
        if(!vis[g[x][i]]) t = dfs(g[x][i],t+1);
    }
    return f[x] = t + 1;
}

int main(){
    cin >> n;
    g = mat(n+1);
    d = vll(n+1);
    f = vll(n+1);
    vis = vbl(n+1);
    for(lli i = 0;i < n;i++){
        cin >> u >> k;
        for(lli i = 0;i < k;i++){
            cin >> v;
            g[u].push_back(v);
        }
    }
    for(lli i = 1;i <= n;i++){
        if(!vis[i]) t = dfs(i,t+1);
    }
    for(lli i = 1;i <= n;i++){
        cout << i << " " << d[i] << " " << f[i] << endl;
    }
    return 0;
}