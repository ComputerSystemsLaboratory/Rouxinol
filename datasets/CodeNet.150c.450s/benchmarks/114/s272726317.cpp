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

vll par;
vll rnk;
void init(lli n){
    par = vll(n);
    rnk = vll(n);
    for(lli i = 0;i < n;i++) par[i] = i;
}
lli find(lli x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
}
void unite(lli x,lli y){
    x = find(x);y = find(y);
    if(x == y) return;
    if(rnk[x] < rnk[y]) par[x] = y;
    else {
        par[y] = x;
        if(rnk[x] == rnk[y]) rnk[x]++;
    }
}
bool same(lli x,lli y){
    return find(x) == find(y);
}

lli n;
vll c,r,l;
vll p;
mat g;
lli ans = 0;

int main(){
    cin >> n;
    g = mat(n,vll(n));
    for(lli i = 0;i < n;i++){
        for(lli j = 0;j < n;j++){
            cin >> g[i][j];
        }
    }
    for(lli i = 0;i < n;i++){
        for(lli j = i+1;j < n;j++){
            if(g[i][j] >= 0) c.push_back(g[i][j]),r.push_back(i),l.push_back(j);
        }
    }
    p = vll(c.size());
    for(lli i = 0;i < p.size();i++) p[i] = i;
    sort(p.begin(),p.end(),[](lli a,lli b){
        return c[a] < c[b];
    });
    init(n);
    for(lli i = 0;i < p.size();i++){
        if(!same(r[p[i]],l[p[i]])) unite(r[p[i]],l[p[i]]),ans += c[p[i]];
    }
    cout << ans << endl;
    return 0;
}