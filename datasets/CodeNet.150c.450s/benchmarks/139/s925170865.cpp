#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1e9;
const ll MOD = 1e9 + 7;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n+1, vector<int>());
    rep(i, m){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> ans(n+1), dist(n+1, INF);
    queue<int> que;
    que.push(1);
    dist[1] = 0;
    while(que.size() != 0){
        int v = que.front();
        que.pop();
        for(auto nv: G[v]){
            if(dist[nv] > dist[v]+1){
                que.push(nv);
                dist[nv] = dist[v] + 1;
                ans[nv] = v;
            }
        }
    }

    cout << "Yes" << endl;
    for(int i=2; i<=n; i++) cout << ans[i] << endl;
}
