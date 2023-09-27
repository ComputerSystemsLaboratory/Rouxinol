#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(long long i=0;i<(long long)(n);i++)
#define rep2(i, s, n) for(long long i=(s);i<(long long)(n);i++)
#define repi(i, n) for(int i=0;i<(int)(n);i++)
#define rep2i(i, s, n) for(int i=(s);i<(int)(n);i++)
#define all(v) v.begin(), v.end()

using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using P = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;

const ll INF = (1LL<<60);
const int INFi = (1<<29);

int main(){

    ll n, m; cin >> n >> m;
    ll u, v;
    vvll G(1<<17, vll(0));
    vll p(1<<17, 0);
    rep(i, m){
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    } 

    queue<ll> q;
    q.push(1);

    p[1] = 1;
    while(!q.empty()){
        u = q.front(); q.pop();
        for(auto e:G[u]){
            if(!p[e]){
                q.push(e);
                p[e] = u;
            }
        }
    }

    cout << "Yes" << endl;
    rep(i, n-1) cout << p[i+2] << endl;

    return 0;
}