#include<bits/stdc++.h>

using namespace std;
#define WHITE 0 //未到達
#define GLAY 1 //訪問中
#define BLACK 2 //訪問完了
#define INF 1000000001


void dfs(const vector<vector<int> > &adj_list,
     const int id, vector<int> &color,const int color_id){
    color[id] = color_id;
    for(auto itr = adj_list[id].begin();itr != adj_list[id].end(); itr++){
        int v = *itr;
        if(color[v] == -1){
            color[v] = color_id;
            dfs(adj_list,v,color,color_id);
        }
    }
    return;
}

void assignColor(const vector<vector<int> > &adj_list, vector<int> &color,const int n){
    int color_id = 0;
    for(int u = 0; u < n; u++){
        if(color[u] == -1){
            dfs(adj_list,u,color,color_id);
            color_id++;
        }
    }
}


int main(){
    int n,m;
    int s,t;
    int q;

    cin >> n >> m;
    vector<vector<int> > adj_list(n);
    vector<int> color(n,-1);


    for(int i = 0; i < m; i++){
        cin >> s >> t;
        adj_list[s].push_back(t);
        adj_list[t].push_back(s);
    }

    assignColor(adj_list,color,n);

    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> s >> t;
        if(color[s] == color[t]) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
