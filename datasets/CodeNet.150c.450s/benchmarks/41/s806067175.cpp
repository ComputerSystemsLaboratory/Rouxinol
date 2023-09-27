#include <iostream>
#include <vector>

#define INF 2000000001

using namespace std;
vector<vector<int>> warshallFloyd(int v, vector<vector<int>> g){
    auto ds = vector<vector<int>>(g);
    for(int i = 0; i < v; ++i){
        for(int j = 0; j < v; ++j){
            if(ds[i][j] == INF){
                continue;
            }
            for(int k = 0; k < v; ++k){
                if(ds[k][i] != INF){
                    ds[k][j] = min(ds[k][i] + ds[i][j], ds[k][j]);
                }
            }
        }
    }
    return ds;
}

bool hasNegativeCycle(vector<vector<int>> ds){
    for(int i = 0; i < ds.size(); ++i){
        if(ds[i][i] < 0){
            return true;
        }
    }
    return false;
}
int main(){
    int v, e;
    cin >> v >> e;
    auto g = vector<vector<int>>();
    for(int i = 0; i < v; ++i){
        g.push_back(vector<int>(v, INF));
        g[i][i] = 0;
    }
    int s, t, w;
    for(int i = 0; i < e; ++i){
        cin >> s >> t >> w;
        g[s][t] = w;
    }
    auto ds = warshallFloyd(v, g);
    if(hasNegativeCycle(ds)){
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for(auto xs : ds){
            for(auto it = xs.begin(); it != xs.end(); ++it){
                if(it != xs.begin()){
                    cout << " ";
                }
                if(*it != INF){
                    cout << *it;
                } else {
                    cout << "INF";
                }
            }
            cout << endl;
        }
    }

}