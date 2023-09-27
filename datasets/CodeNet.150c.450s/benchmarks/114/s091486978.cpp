#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

#define MAX 101

int total_cost = 0;

vector<vector<int>> adj_mat(MAX, vector<int>(MAX, INT_MAX));

int find_node(vector<int> cost){
    int node;
    int min = INT_MAX;
    rep(i, cost.size()){
        if(cost.at(i) < min){
            node = i;
            min = cost.at(i);
        }
    }
    total_cost += min;

    return node;
}

void prim(int node_size){
    int node = 0;
    vector<int> U(node_size, 0);  // 最小全域木に含まれない頂点
    vector<int> cost(node_size); //構築中の木と未処理ノードvの間のコスト

    // cost, nearestNodeの初期化
    rep(i, node_size){
        cost.at(i) = adj_mat.at(node).at(i);
    }

    // rep(i, node_size) cout << cost.at(i) << " ";
    // cout << endl;

    U.at(node) = 1; //nodeは処理済み

    while(accumulate(U.begin(), U.end(), 0) != node_size){
        // 構築中の木に一番近いノードを探す
        int x = find_node(cost);
        // cout << "add node :" << x << endl;
        U.at(x) = 1;

        cost.at(x) = INT_MAX; // 自分自身へのコストは無限大とする

        rep(i, node_size){
            if(U.at(i) == 1){
                continue;
            }
            // 未処理ノードと新たに加えたノードとの距離が、以前のcostよりも小さい場合、更新
            if(adj_mat.at(x).at(i) < cost.at(i)){
                cost.at(i) = adj_mat.at(x).at(i);
            }
        }
        // rep(i, node_size) cout << cost.at(i) << " ";
        // cout << endl;
    }
} 

int main(){
    int n; cin >> n;
    rep(i, n){
        rep(j, n){
            cin >> adj_mat.at(i).at(j);
            if(adj_mat.at(i).at(j) == -1){
                adj_mat.at(i).at(j) = INT_MAX;
            }
        }
    }


    prim(n);
    cout << total_cost << endl;
}
