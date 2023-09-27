#include<bits/stdc++.h>
/*
g++ -std=c++11 -Wall -g -fsanitize=undefined -D_GLIBCXX_DEBUG aoj/grl_1_b.cpp
*/
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define SZ(x) ((int)(x).size())
#define INF (1e16)
typedef long long ll;

int n, m, s;
vector<vector<pair<int, int> > > g;
vector<ll> dist;

void bellman_ford(){
    rep(i, n - 1){
        rep(j, n){
            if(dist[j] == INF) continue;

            rep(k, g[j].size()){
                int next = g[j][k].first;
                if(dist[next] > dist[j] + g[j][k].second){
                    dist[next] = dist[j] + g[j][k].second;
                }
            }
        }
    }

    int flag = 1;
    rep(j, n){
        if(dist[j] == INF) continue;

        rep(k, g[j].size()){
            int next = g[j][k].first;
            if(dist[next] > dist[j] + g[j][k].second){
                cout << "NEGATIVE CYCLE" << "\n";
                j = n;
                flag = 0;
                break;
            }
        }
    }
    if(flag){
        rep(i, n){
            if(dist[i] == INF) cout << "INF" << "\n";
            else cout << dist[i] << "\n";
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);//おまじないでcin, cout早くする
    cin >> n >> m >> s;
    g.resize(n);
    dist.resize(n);
    rep(i, m){
        int a, b, d;
        cin >> a >> b >> d;
        g[a].push_back(make_pair(b, d));
    }
    rep(i, n){
        dist[i] = INF;
    }
    dist[s] = 0;

    bellman_ford();
    return 0;
}
