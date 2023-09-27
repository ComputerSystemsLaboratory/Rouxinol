#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;

int main() {
    int V, E;
    cin>>V>>E;
    vector<vector<pair<int, int> > > edge(V);
    int s, t, w;
    for(int i=0;i<E;++i){
        cin>>s>>t>>w;
        edge[s].push_back(make_pair(t, w));
        edge[t].push_back(make_pair(s, w));
    }
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > que;
    que.push(make_pair(0, 0));
    pair<int, int> state;
    int dot, cost;
    int DP[V];
    for(int i=0;i<V;++i){
        DP[i] = -1;
    }
    while(!que.empty()){
        state = que.top();que.pop();
        dot = state.se;
        cost = state.fi;
        if(DP[dot]!=-1) continue;
        DP[dot] = cost;
        for(int i=0;i<edge[dot].size();++i){
            if(DP[edge[dot][i].fi]!=-1) continue;
            que.push(make_pair(edge[dot][i].se, edge[dot][i].fi));
        }
    }
    int ans = 0;
    for(int i=0;i<V;++i){
        ans += DP[i];
    }
    cout<<ans<<endl;
}


