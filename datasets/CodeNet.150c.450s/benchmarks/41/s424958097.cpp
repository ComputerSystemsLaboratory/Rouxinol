#include <bits/stdc++.h>
#define int long long
using namespace std;

struct WarshallFloyd{
    int n;
    const int INF = 1e15;
    vector<vector<int> > d;
    WarshallFloyd(int _n){
        n = _n;
        d.resize(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                d[i][j] = INF;
            }
            d[i][i] = 0;
        }
    }
    void build(){
        for(int k = 0; k < n; k++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
    // 負の閉路を検出すると true を返す
    bool negative_cycle(){
        for(int i = 0; i < n; i++) if(d[i][i] != 0) return true;
        return false;
    }
};

signed main(){
    int n, m;
    cin >> n >> m;
    WarshallFloyd wf(n);
    for(int i = 0; i < m; i++){
        int u, v, c;
        cin >> u >> v >> c;
        wf.d[u][v] = c;
    }
    wf.build();
    if(wf.negative_cycle()){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n;j++){
                if(j) cout << " ";
                if(wf.d[i][j] > wf.INF / 2) cout << "INF";
                else cout << wf.d[i][j];
            }
            cout << endl;
        }
    }
}
