#include<iostream>
#include<vector>
#include<queue>
#define rep(i,n) for(ll i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main()
{
    ll v, e, r;
    cin >> v >> e >> r;
    vector<vector<pair<ll, ll>>> edges(v);
    rep(i,e){
        ll s, t, d;
        cin >> s >> t >> d;
        edges[s].push_back(make_pair(d, t));
    }
    const ll inf = 1e9;
    vector<ll> dist(v, inf);
    priority_queue<
        pair<ll, ll>,
        vector<pair<ll, ll>>,
        greater<pair<ll, ll>>
    >q;    
    q.push(make_pair(0, r));

    while(!q.empty()) {
        pair<ll, ll> hoge = q.top();
        ll d = hoge.first;
        ll t = hoge.second;
        q.pop();
        if(d < dist[t]) {
            dist[t] = d;
            for(auto huga : edges[t]) {
                ll l = huga.first;
                ll u = huga.second;
                if(dist[u] > d + 1) {
                    q.push(make_pair(d + l, u));
                }
            }
        }
    }
    for(ll d : dist) {
        if(d == inf) cout << "INF" << endl;
        else cout << d << endl;
    }
    return 0;
}
