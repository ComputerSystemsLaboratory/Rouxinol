#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//const ll INF = 1LL << 60;
const int INF = 1001001001;
vector<int> to[100005];

int main(void){
    int n,m;
    cin >> n >> m;
    REP(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    queue<int> q;
    vector<int> dist(n,INF);
    vector<int> pre(n,-1);
    dist[0]=0;
    q.push(0);
    while(!q.empty()){
        int v=q.front();q.pop();
        for(int u : to[v]){
            if(dist[u] != INF) continue;
            dist[u]=dist[v]+1;
            pre[u]=v;
            q.push(u);
        }
    }
    cout << "Yes" << endl;
    REP(i,n){
        if(i==0)continue;
        int ans=pre[i];
        ans++;
        cout << ans << endl;
    }
    return 0;
}