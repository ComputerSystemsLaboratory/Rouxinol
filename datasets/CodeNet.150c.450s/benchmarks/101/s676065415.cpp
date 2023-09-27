#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

#define MAX 100000

vector<vector<int>> adj_list(MAX);
vector<int> visited(MAX, -1);
vector<int> init_visited(MAX, -1);

int group = 0;

void dfs(int node){
    // cout << "init node " << node << endl;
    visited.at(node) = group;
    
    for(int i = 0; ; i++){
        int next_node = adj_list.at(node).at(i);
        // cout << next_node << endl;

        if(next_node != -1 && visited.at(next_node) == -1){
            // cout << "called dfs with " << next_node << endl;
            dfs(next_node);
        }
        if(next_node == -1){
            break;
        }
    }
    // cout << "returned from " << node << endl;
}

int main(){
    int n, m; cin >> n >> m;


    //　隣接リストの作成
    rep(i, m){
        int from, to;
        cin >> from >> to;
        adj_list.at(from).push_back(to);
        adj_list.at(to).push_back(from);
    }
    // 番兵の挿入
    rep(i, n){
        adj_list.at(i).push_back(-1);
    }

    for(int i = 0; i < n; i++){
        if(visited.at(i) == -1){
            dfs(i);
            group++;
        }
    }

    int q; cin >> q;
    rep(i, q){
        int from, to;
        cin >> from >> to;
        if(visited.at(from) == visited.at(to)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }

    // cout << "=================" << endl;

    // for(int i = 0; i < m; i++){
    //     cout << "node " << i << " ";
    //     for(int j = 0; j < adj_list.at(i).size(); j++){
    //         cout << adj_list.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    // rep(i, n){
    //     cout << "node " << i << " " << visited.at(i) << endl;
    // }
}
