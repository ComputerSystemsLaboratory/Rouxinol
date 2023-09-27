#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;

int n = 100005;
int m;
vector<vector<pll>> graph(n,vector<pll>());

vector<ll>  Dijkstra(int start){
    vector<bool> seen(n,false);
    vector<ll> shortest(n,LINF);
    priority_queue<pll,vector<pll>,greater<pll>> pq;
    pq.push(pll(0,start));

    while(!pq.empty()){
        ll dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if(seen[node]) continue;

        shortest[node] = dist;
        seen[node] = true;

        for(pll next:graph[node]){
            int next_node = next.second;
            ll next_cost = next.first;
            if(seen[next_node]) continue;
            pq.push(pll(next_cost + dist,next_node));
        }
    }

    return shortest;
}

int main(){
    int r;
    cin >> n >> m >> r;
    rep(i,m){
        int s,t,d;
        cin >> s >> t >> d;
        graph[s].push_back(pll(d,t));
    }

    vector<ll> dis = Dijkstra(r);

    rep(i,n){
        if(dis[i]==LINF) cout << "INF" << endl;
        else cout << dis[i] << endl;
    }
    return 0;
}
