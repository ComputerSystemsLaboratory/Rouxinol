#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

#define MAX 200

vector<vector<int>> adj_mat(MAX, vector<int>(MAX, 0));
vector<int> d(MAX, -1); //頂点を訪問したステップを記録
vector<int> f(MAX, -1); //頂点の隣接リストを探索し終えたステップを記録

int n;
int step = 1;

void dfs(int init_node){
    stack<int> s;
    int node = init_node;
    s.push(node);
    d.at(node) = step;

    int next_node = -1;
    while(1){
        step++;

        next_node = -1;
        rep(i, n){
            if(adj_mat.at(node).at(i) == 1 && d.at(i) == -1){
                next_node = i;
                break;
            }
        }

        if(next_node == -1){        //新たなノードがない場合
            s.pop();            //次のノードが存在しないノードをスタックから削除
            if(s.size() == 0){
                f.at(node) = step;
                step++;
                break;
            }
            next_node = s.top();

            f.at(node) = step;   // 新たなノードがないので訪問ずみ
            // cout << "node not found " << node+1 << "    " << next_node+1 << endl;
        }else{                      //新たなノードがある場合
            s.push(next_node);
            d.at(next_node) = step; // 初めて見つけたノードとして記録
            // cout << "node found " << node+1 << " --> " << next_node+1 << endl;
        }
        
        node = next_node;
    }
}

int main(){
    cin >> n;

    // 隣接行列の作成
    rep(i, n){
        int u, k; cin >> u >> k;
        rep(j, k){
            int v; cin >> v;
            adj_mat.at(u-1).at(v-1) = 1;
        }
    }


    rep(i, n){
        if(d.at(i) == -1){
            dfs(i);
        }
    }

    rep(i, n){
        cout << i + 1 << " " << d.at(i) << " " << f.at(i) << endl;
    }


}


