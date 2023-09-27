#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;

ll N,Q,c,x,y;
vector<int> par,rnk;


int root(int x){
    if(par[x] == x) return x;
    else return par[x] = root(par[x]);
}

void unite(int x, int y){
    x = root(x);
    y = root(y);
    if(x == y) return;
    else if(rnk[x] < rnk[y]) par[x] = y;
    else {
        par[y] = x;
        if(rnk[x]==rnk[y]) ++rnk[x];
    }
}

bool same(int x, int y){
    return root(x) == root(y);
}

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> N >> Q;

    // init //
    par.resize(N,0);
    rnk.resize(N,0);
    REP(i,N) par[i] = i;
    // init //

    REP(i,Q){
        cin >> c >> x >> y;
        if(c==0){
            unite(x,y);
        } else {
            cout << (same(x,y) ? 1 : 0) << '\n';
        }
    }
    return 0;
}
