// All Pairs Shortest Path
// 所要時間 分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

int main() {

    int v, e;
    cin >> v >> e;
    const long long INF = 10000000000000000;
    vector<vector<long long> > cost(v, vector<long long>(v, INF));
    rep(i, e){
        int s, t, d;
        cin >> s >> t >> d;
        cost[s][t] = d;
    }
    rep(i, v){
        cost[i][i] = 0;
    }

    rep(k, v){
        rep(i, v){
            rep(j, v){
                if(cost[i][k] != INF && cost[k][j] != INF){
                    cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
                }
            }
        }
    }
    bool nega = false;
    rep(i, v){
        if(cost[i][i] < 0){
            nega = true;
        }
    }

    if(nega){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i, v){
        rep(j, v){
            if(cost[i][j] == INF){
                cout << "INF";
            }
            else{
                cout << cost[i][j];
            }
            if(j != v-1){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
