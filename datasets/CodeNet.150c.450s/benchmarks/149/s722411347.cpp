#include <bits/stdc++.h>
using namespace std;

class UnionFind{
    private:
        vector<int> parent,rank,tree_w;
        int tree_num;
    public:
        UnionFind(int size){
            tree_num=size;
            for (int i=0; i<size; i++){
                parent.push_back(i);
                rank.push_back(0);
                tree_w.push_back(1);
            }
        }

        int findset(int x){
            return x==parent[x] ? x : parent[x]=findset(parent[x]);
        }

        void unite(int x,int y){
            x=findset(x);y=findset(y);
            if (x==y) return;
            if (rank[x]>rank[y]) swap(x,y);
            parent[x]=y;
            tree_num-=1;
            tree_w[y]+=tree_w[x];
            if (rank[x]==rank[y]) rank[y]+=1;
        }

        bool same(int x,int y){
            return findset(x)==findset(y);
        }

        int tree_number(){
            return tree_num;
        }

        int tree_weight(int x){
            return tree_w[findset(x)];
        }
};

int n,q;
int main(){
    cin >> n >> q;
    UnionFind uf(n);
    for(int i=0; i<q; i++){
        int c,x,y;
        cin >> c >> x >> y;
        if(c==0) uf.unite(x,y);
        else cout << uf.same(x,y) << endl;
    }
    return 0;
}