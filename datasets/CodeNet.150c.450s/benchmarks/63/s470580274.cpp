#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define REP(i, x, n) for(lint i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(lint i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;
 
const lint MAX = 1e17;
lint v, e, r;
vector< vector< pair<lint, lint> > > g;
vector<lint> dis;
vector<bool> done;

void dijkstra(lint start){
    dis[start] = 0;
    priority_queue< pair<lint, lint>, vector< pair<lint, lint> >, greater< pair<lint, lint> > > dij;
    dij.push(make_pair(0, start));
    while(!dij.empty()){
        pair<lint, lint> tmp = dij.top();
        dij.pop();
        if(done[tmp.second]){
            continue;
        }
        done[tmp.second] = true;
        rep(i, g[tmp.second].size()){
            if(dis[g[tmp.second][i].first] > dis[tmp.second] + g[tmp.second][i].second){
                dis[g[tmp.second][i].first] = dis[tmp.second] + g[tmp.second][i].second;
                dij.push(make_pair(dis[g[tmp.second][i].first], g[tmp.second][i].first));
            }
        }
    }
    return;
}
 
int main(){
    cin >> v >> e >> r;
    g.resize(v);
    rep(i, e){
        lint s, t, d;
        cin >> s >> t >> d;
        g[s].push_back(make_pair(t, d));
    }
    dis.resize(v, MAX);
    done.resize(v, false);
    dijkstra(r);
    rep(i, v){
        if(dis[i] == MAX){
            cout << "INF" << endl;
        }else{
            cout << dis[i] << endl;
        }
    }
    return 0;
}
