#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define repr(i,n) for(ll i=(n-1);i>=0;i--)
#define all(x) x.begin(),x.end()
#define br cout << "\n";
using namespace std;
const long long INF = 1e10;
const int MOD = 1e9+7;
using Graph = vector<vector<ll>>;
template<class T> inline bool chmin(T &a, T b) { if(a > b){ a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b) { if(a < b){ a = b; return true;} return false;}

// 0 false, 1 true 
// string to int : -48
// a to A : -32
// ceil(a)  1.2->2.0
// c++17	g++ -std=c++17 a.cpp

bool flag = true;
vector<long long> bellman_ford(vector<vector<pair<ll, ll>>> g, long long start){
    vector<ll> distance(g.size(), INF);
    distance[start] = 0;
    ll count = 0;
    while(true){
        bool update = false;
        for(ll i = 0; i < g.size(); i++){
            for(ll j = 0; j < g[i].size(); j++){
                if(distance[i] != INF && distance[g[i][j].second] > distance[i] + g[i][j].first){
                    distance[g[i][j].second] = distance[i] + g[i][j].first;
                    update = true;
                }
            }
        }
        if(!update) break;
        count++;
        if(count == g.size()){
            flag = false;
            return distance;
        }
    }
    return distance;
} 

int main() {
    std::cout << std::fixed << std::setprecision(15);
    ll v, e; cin >> v >> e;
    vector<vector<pair<ll, ll>>> g(v);
    rep(i, e){
        ll s, t, d; cin >> s >> t >> d;
        g[s].emplace_back(d, t);
    }

    rep(i, v){
        vector<ll> dis = bellman_ford(g, i);
        if(flag){
            rep(j, v){
                if(dis[j] == INF){
                    cout << "INF";
                }else{
                    cout << dis[j];
                }
                if(j != v-1){
                    cout << " ";
                }
            }
            cout << endl;
        }else{
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
        
    }


}
