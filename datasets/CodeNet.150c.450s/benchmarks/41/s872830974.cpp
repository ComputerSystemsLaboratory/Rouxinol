#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const long long int INF = 1100100100100100;

int main(){
    long long int v, e;
    cin >> v >> e;
    vector<vector<long long int>> g(v, vector<long long int>(v, INF));
    for(int i = 0; i < e; i++){
        long long int s, t, l;
        cin >> s >> t >> l;
        g[s][t] = l;
    }
    for(int i = 0; i < v; i++) g[i][i] = 0;

    for(int k = 0; k < v; k++){
        for(int i = 0; i < v; i++){
            for(int j = 0; j < v; j++){
                if(g[i][k] != INF && g[k][j] != INF){
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
                }
            }
        }
    }

    bool ok = true;
    for(int i = 0; i < v; i++){
        if(g[i][i] < 0) ok = false;
    }

    if(ok){
        for(int i = 0; i < v; i++){
            for(int j = 0; j < v; j++){
                if(g[i][j] == INF) cout << "INF";
                else cout << g[i][j];

                if(j != v-1) cout << " ";
            }
            cout << endl;
        }
    }else{
        cout << "NEGATIVE CYCLE" << endl;
    }
    return 0;
}
