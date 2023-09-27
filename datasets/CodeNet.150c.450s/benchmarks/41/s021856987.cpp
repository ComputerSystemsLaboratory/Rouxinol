#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

const ll INF = 1001001001001001001;
//const ll INF = 50;


int main(){
    int v,e;
    cin >> v >> e;
    ll G[v][v];
    rep(i,v) rep(j,v) G[i][j]=INF;

    vector<vector<int>> to(v);
    vector<vector<ll>> weight(v);

    rep(i,v) rep(j,v){
        if(i==j) G[i][j]=0;
        else G[i][j]=INF;
    }

    rep(i,e) {
        int s,t; ll d;
        cin >> s >> t >> d;
        to[s].push_back(t);
        weight[s].push_back(d);
        G[s][t] =d;
    }

    /*
    cout << "graph" << endl;
    rep(i,v){
        rep(j,v) cout << G[i][j] << " ";
        cout << endl;
    }*/


    for(int i = 0; i<v; ++i){

        //cout << "now " << i<< endl;
        //新規追加の最短距離の更新
        rep(k,to[i].size()){
                int temp = to[i][k];
                //cout << "temp " << temp << endl;
                if(temp>i) continue;
                for(int j=0;j<i; ++j){
                    G[i][j] = min(G[i][j],G[i][temp]+G[temp][j]);
                }
                /*
                cout << "graph1" << endl;
                rep(i,v){
                    rep(j,v) cout << G[i][j] << " ";
                    cout << endl;
                    }
                    */
            }
        //以前の頂点の最短経路の見直し
        rep(j,v){
            rep(k,v){
                //if(j>=v) continue;
                //if(k>=v) continue;
                G[j][k]=min(G[j][k],G[j][i]+G[i][k]);
            }
        }
        /*
        cout << "graph" << endl;
        rep(i,v){
            rep(j,v) cout << G[i][j] << " ";
            cout << endl;
            }
            */
    }

    /*
    cout << "graph" << endl;
    rep(i,v){
        rep(j,v) cout << G[i][j] << " ";
        cout << endl;
    }
    */

   //do NegativeCycles exist?
    rep(i,v){
        if (G[i][i]<0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i,v){
        rep(j,v){
            if(G[i][j]>(INF-100100100100100)) cout << "INF";
            else cout << G[i][j];
            if(j!=v-1) cout << " ";
            else cout << endl;
        }
        //cout << endl;
    }

    
}
