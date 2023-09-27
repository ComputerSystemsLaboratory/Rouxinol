#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define ALL(n) begin(n),end(n)
using Graph=vector<vector<int>>;

int n;
// プリムのアルゴリズム
vector<int> included;
int Prim(const Graph &G,int v,int &cost){
    // 頂点vは木に含まれた
    included.push_back(v);
    // n頂点全てが木に含まれていれば終了
    if(included.size()==n) return cost;

    int min_=2001;
    int to=-1;
    for(int x:included){
        for(int y=0; y<n; y++){
            if(G[x][y]<min_ && G[x][y]!=-1){
                // yがincludedに含まれている場合，何もしない
                if(find(included.begin(),included.end(),y)!=included.end()){
                    continue;
                }
                min_=G[x][y];
                to=y;
            }
        }
    }

    // 頂点toを追加して，Primを呼び出す
    cost+=min_;
    return Prim(G,to,cost);
}

int main(){
    cin>>n;
    
    // 隣接行列を受け取る
    Graph G(n,vector<int>(n));
    REP(i,n){
        REP(j,n){
            cin>>G[i][j];
        }
    }

    int cost=0;

    cout<<Prim(G,0,cost)<<endl;
}
