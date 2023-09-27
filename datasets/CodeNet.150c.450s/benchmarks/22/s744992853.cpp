#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll =  long long ;
using P = pair<int,int> ;
const ll INF = 1e12;
const int MOD = 1000000007;

ll v = 1005,e;
vector<vector<pair<ll,ll>>> graph(v,vector<pair<ll,ll>>());
vector<ll> shortest(v,INF);

bool bellmanford(ll start){
    shortest[start] = 0;
    int cnt = 0;
    while(1){
        bool update = false;
        for(int i=0;i<v;i++){
            if(shortest[i] == INF) continue;
            for(pair<ll,ll> edge:graph[i]){
                if(shortest[edge.second] > shortest[i] + edge.first){
                    shortest[edge.second] = shortest[i] + edge.first;
                    update = true;
                }
            }
        }
        if(!update) break;
        cnt ++;
        if(cnt > v) return false;
    }
    return true;
}

int main(){
    int start;
    cin >> v >> e >> start ;
    rep(i,e){
        int s,t,d;
        cin >> s >> t >> d;
        graph[s].push_back(make_pair(d,t));
    }

    if(!bellmanford(start)){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    rep(i,v){
        if(shortest[i] == INF) cout << "INF" << endl;
        else cout << shortest[i] << endl;
    }
}
