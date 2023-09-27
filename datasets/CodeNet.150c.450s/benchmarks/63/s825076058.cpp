#include <bits/stdc++.h>
#define p pair<int,int>
#define mk make_pair
#define rep(i,n) for(int i=0; i < (n);++i)
using namespace std;
template <class _t> inline bool chmax (_t& a,_t b){if(a<b){a=b;return true;}return false;} template <class _t> inline bool chmin (_t& a,_t b){if(a>b){a=b;return true;}return false;}

const int INF = 2147483647;
const long long inf = 1ll << 60;
const long long mod = 1000000007;

int dx[4] = {1,0,-1,0};int dy[4] = {0,-1,0,1};
int main() {
    int n,m,r; cin >> n >> m >> r;
    vector<vector<pair<int,int> > >g(n);
    for(int i=0;i<m;i++){
        int a,b,c; cin >> a >> b >> c;
        g[a].push_back(make_pair(b,c));
    }
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
    q.push(make_pair(r,0));
    vector<int> table(n,INF);
    while(!q.empty()){
        int now = q.top().first;
        int d = q.top().second;
        q.pop();
        if(table[now] <=  d) continue;
        table[now] = d;
        for(int i=0;i<g[now].size();i++){
            if(d+g[now][i].second <= table[g[now][i].first]){
                q.push(make_pair(g[now][i].first,d+g[now][i].second));
            }
        }
    }
    for(int i=0;i<n;i++){
        if(table[i]==INF) cout << "INF" << endl;
        else cout << table[i] << endl;
    }
    return 0;
}

