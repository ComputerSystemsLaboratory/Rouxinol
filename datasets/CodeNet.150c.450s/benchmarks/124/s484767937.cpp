#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

#define MAX 101
#define INF INT_MAX

vector<vector<int>> adj_mat(MAX, vector<int>(MAX, INT_MAX));

void dijkstra(int start_node, int node_size){
    vector<int> visited(node_size, 0);
    vector<int> cost_table(node_size, INF);

    int node = start_node;
    cost_table.at(node) = 0;

    while(true){
        // cout << "looking node : " << node << ",  cost : ";
        // rep(i, node_size){
        //     cout << cost_table.at(i) << " "; 
        // }
        // cout << endl;

        visited.at(node) = 1;

        rep(i, node_size){
            if(visited.at(i) == 0 && adj_mat.at(node).at(i) != INF){
                int new_cost = adj_mat.at(node).at(i) + cost_table.at(node);
                if(new_cost < cost_table.at(i)){
                    cost_table.at(i) = new_cost;
                }
            }
        }

        int m = INF;
        rep(i, node_size){
            if(visited.at(i) == 0 && (cost_table.at(i) < m)){
                m = cost_table.at(i);
                node = i;
            }
        }
        if(m == INF){
            break;
        }
    }

    rep(i, node_size){
        cout << i << " " << cost_table.at(i) << endl;
    }

}

int main(){
    int n; cin >> n;
    rep(i, n){
        int u, k; cin >> u >> k;
        rep(j, k){
            int v, c; cin >> v >> c;
            adj_mat.at(u).at(v) = c;
        }
    }

    // rep(i, n){
    //     rep(j, n){
    //         if(adj_mat.at(i).at(j) == INT_MAX) cout << "∞ ";
    //         else cout << adj_mat.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    dijkstra(0, n);

}

