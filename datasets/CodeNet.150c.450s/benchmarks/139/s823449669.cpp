#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll> >;

const ll INF = 1e18;
const ll MOD = 1000000007;
const ll MX = 0; //最大値

#define rep(i,n) for(ll i=0; i<(ll)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define MAX(x) *max_element(ALL(x))
#define PB push_back
#define F first
#define S second

ll N, M;
Graph G;

void solve(){
    vector<int> dist(N, -1), prev(N, -1);
    queue<ll> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()) {
        ll v = que.front();
        que.pop();
        for (auto nv : G[v]){
            if(dist[nv] == -1){
                dist[nv] = dist[v]+1;
                prev[nv] = v;
                que.push(nv);
            }
        }
    }
    cout << "Yes" << endl;
    for(int i = 1; i < N; i++) cout << prev[i] + 1 << endl;
}

int main(){
    cin >> N >> M;
    G.assign(N, vector<ll>());
    rep(i, M){
        ll a,b;
        cin >> a >> b;
        a--; b--;
        G[a].PB(b); G[b].PB(a);
    }
    solve();
    return 0;
}