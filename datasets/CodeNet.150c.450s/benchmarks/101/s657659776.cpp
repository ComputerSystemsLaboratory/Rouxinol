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

lli n,m,q;
lli s,t;

int main(){
    cin >> n >> m;
    init(n);
    for(lli i = 0;i < m;i++){
        cin >> s >> t;
        unite(s,t);
    }
    cin >> q;
    for(lli i = 0;i < q;i++){
        cin >> s >> t;
        cout << (same(s,t) ? "yes" : "no" ) << endl;
    }
    return 0;
}