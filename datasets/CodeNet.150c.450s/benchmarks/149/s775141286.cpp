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

lli n,q;
lli com,x,y;

int main(){
    cin >> n >> q;
    init(n);
    for(lli i = 0;i < q;i++){
        cin >> com >> x >> y;
        if(com == 0){
            unite(x,y);
        }else if(com == 1){
            cout << same(x,y) << endl;
        }
    }
    return 0;
}