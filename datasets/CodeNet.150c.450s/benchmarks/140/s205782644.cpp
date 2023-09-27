#include<bits/stdc++.h>

#define rep(i,N) for(int i=0;i<N;i++)
#define rep2(i,N) for(int i=1;i<=N;i++)
using namespace std;
long long  INF=1e18;
long long mod=1e9+7;

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
/*クラスカル法

1.グラフの各頂点がそれぞれの木に属するように木の集合を生成
    =>頂点1個のみからなる木が頂点の個数だけ存在する状態

2.グラフのすべての辺を含む集合Eを生成

3.Eが空になるまで以下を繰り返す
    Eから重みが最小の辺eを取り出し、削除。
    その辺eがつながっている2つの頂点u,vが別々の木に属しているならば、
    辺eを森Fに加え、二つの木を連結しひとつの木にまとめる

4.最終的には森Fが最小全域木となる

*/
    int v_size;
    int e_size;
    cin>>v_size>>e_size;

    UnionFind uf(v_size);
    multimap<long long ,pair<int,int>>edge;
    rep(i,e_size){
        int s,t;
        long long w;
        cin>>s>>t>>w;
        edge.emplace(make_pair(w,make_pair(s,t)));
    }
    auto it=edge.begin();
    long long ans=0;

    while(it!=edge.end()){
        int one=it->second.first;
        int two=it->second.second;
        if(!uf.same(one,two)){
            ans+=it->first;
        }
        uf.unite(one,two);
        it++;
    }

    cout<<ans<<endl;
    return 0;

}
/*


*/

