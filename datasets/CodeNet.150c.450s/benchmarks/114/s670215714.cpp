#include<iostream>
#include<vector>
#include<utility>
using namespace std;

bool self(vector<vector<int> >& G, int s, int t, vector<pair<int, int> >& stock_idx, vector<int>& searched){
    if (searched[s] == 1) return false;
    searched[s] = 1;
    if (G[s][t] != -1 && stock_idx.size() > 1) {
        stock_idx.push_back(make_pair(s, t));
        return true;
    }
    for (int i = 0; i < G[s].size(); i++) {
        if (G[s][i] != -1) {
            stock_idx.push_back(make_pair(s, i));
            if (self(G, i, t, stock_idx, searched)) return true;
            stock_idx.pop_back();
        }
    }
    return false;
}

bool DFS(vector<vector<int> >& G, int s, int t, vector<pair<int, int> >& stock_idx){
    vector<int> searched(G.size(), 0);
    return self(G, s, t, stock_idx, searched);
}

void cut(vector<vector<int> >& G, vector<pair<int, int> >& stock_idx){
    pair<int, int> max_idx = stock_idx[0];
    for (int i = 0; i < stock_idx.size(); i++) {
        if (G[stock_idx[i].first][stock_idx[i].second] > G[max_idx.first][max_idx.second]) {
            max_idx = stock_idx[i];
        }
    }
    G[max_idx.first ][max_idx.second] = -1;
    G[max_idx.second][max_idx.first ] = -1;
    stock_idx.clear();
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        vector<pair<int, int> > stock_idx;
        while (DFS(G, i, i, stock_idx)) cut(G, stock_idx);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (G[i][j] != -1) sum += G[i][j];
        }
    }
    cout << sum << endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << " " << G[i][j];
    //     }
    //     cout << endl;
    // }

    return 0;
}

