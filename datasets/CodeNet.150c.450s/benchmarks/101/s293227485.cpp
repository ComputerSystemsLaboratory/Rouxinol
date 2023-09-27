#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define VMAX 50
#define EMAX 500
#define DMAX 20
#define TRUE 1
#define FALSE 0
#define NOTUSED 0
#define END -1
#define ROOT -1
using Graph=vector<vector<int>>;

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    // 友達関係の受け取り
    int n,m;
    cin>>n>>m;

    UnionFind G(n);

    REP(i,m){
        int a,b;
        cin>>a>>b;

        G.unite(a,b);
    }
    
    // 質問の受け取り
    int q;
    cin>>q;

    vector<pair<int,int>> link(q);
    REP(i,q){
        cin>>link[i].first>>link[i].second;
    }

    // 判定
    REP(i,q){
        if(G.same(link[i].first,link[i].second)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
