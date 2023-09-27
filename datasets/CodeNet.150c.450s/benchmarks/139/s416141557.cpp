#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0;}

const int INF = 1001001001;
int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>>g(n);
    rep(i,m) {
        int a,b;
        cin >> a >> b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int>prev(n,-1);
    vector<int>dist(n,INF);
    dist[0] = 0;
    queue<int>q;
    q.push(0);
    while(!q.empty()) {
        int v = q.front();q.pop();
        for(auto nv : g[v]) {
            if(dist[nv] == INF) {
                dist[nv] = dist[v] + 1;
                q.push(nv);
                prev[nv] = v;
            }
        }
    }
    for(int i = 1;i<n;i++) {
        if(prev[i] == -1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    for(int i = 1;i<n;i++) {
        cout << prev[i] + 1 << endl;
    }
}
    


