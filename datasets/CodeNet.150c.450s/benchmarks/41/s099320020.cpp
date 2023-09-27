#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e15
typedef long long ll;

int V,E;
int V_MAX = 100;

vector<vector<ll>> G(V_MAX, vector<ll>(V_MAX,INF));
//vector<int> d(V_MAX, INF);

int main() {
    cin >> V >> E;
    REP(i,E){
        int s,t,d;
        cin >> s >> t >> d;
        G[s][t] = d;
    }

    REP(i,V) G[i][i] = 0;

    // //ベルマンフォードでテスト
    // bool flag = true;
    // int count = 0;
    // while(flag){
    //     flag = false;
    //     count ++;
    //     REP(i,V){
    //         REP(v, V){
    //             if (d[i] + G[i][v] < d[v]){
    //                 d[v] = d[i] + G[i][v];
    //                 flag = true;
    //             }
    //         }
    //     }
    //     if (flag==true && count==V-1){
    //         cout << "NEGATIVE CYCLE" << endl;
    //         return 0;
    //     }
    // }

    REP(i,V){//ワーシャルフロイド
        REP(j,V){
            REP(k,V){
                G[j][k] = min(G[j][k], G[j][i]+G[i][k]);
            }
        }
    }

    REP(i,V){
        if (G[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
            

    REP(i,V){
        REP(j,V){
            if (G[i][j] > INF/1000){
                cout << "INF";
                if (j != V-1) cout << " ";
            }else{
                cout << G[i][j];
                if (j != V-1) cout << " ";
            }
        }
        cout << endl;
    }

    
    return 0;
}
