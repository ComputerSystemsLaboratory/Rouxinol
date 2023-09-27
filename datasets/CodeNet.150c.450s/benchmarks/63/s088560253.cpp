#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int V, E, r;
    cin >> V >> E >> r;
    vector<vector<pair<int, int>>> dist(V+1, vector<pair<int, int>>());
    for(int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        dist[s].push_back(make_pair(d, t));
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, r));

    int INF = (1<<30);
    vector<int> d_from_r(V, INF);
    while(!pq.empty()){
        int now_d = pq.top().first;
        int now_v = pq.top().second;
        pq.pop();
        if(d_from_r[now_v] != INF){
            // もう訪れた後だった
            continue;
        }
        // 来てなかったので最短経路、ここで更新
        d_from_r[now_v] = now_d;
        for(int i=0; i<dist[now_v].size(); i++){
            int next_d = dist[now_v][i].first + now_d;
            int next_v = dist[now_v][i].second;
            // next_v には未訪問だった
            if(d_from_r[next_v] == INF){
                // d_from_r[next_v] = next_d; // ここで更新すんのは気が早い
                pq.push(make_pair(next_d, next_v));
            }
        }
    }

    for(int i=0; i<V; i++){
        int d = d_from_r[i];
        if(d == INF) cout << "INF" << endl;
        else cout << d << endl;
    }
    return 0;
}
