#include <algorithm>

class UnionFindTree {
public:
    UnionFindTree(int sz){
        mem = new int[sz*2];
        if(mem == NULL) return;
        par = mem;
        rank = mem + sz;
        for(int i = 0; i < sz; i++){
            par[i] = i;
            rank[i] = 0;
        }
    }
    ~UnionFindTree(){
        if(mem != NULL) delete [] mem;
    }
    int find(int x){
        if(par[x] != x) par[x] = find(par[x]);
        return par[x];
    }
    bool unite(int x, int y){
        x = find(x), y = find(y);
        if(x == y) return false;
        if(rank[x] < rank[y]) std::swap(x,y);
        par[y] = x;
        if(rank[x] == rank[y]) rank[x]++;
        return false;
    }
    bool same(int x, int y){
        return find(x) == find(y);
    }
private:
    int * par, * rank, * mem;
};

#include <cstdio>

int main(){
    int n,q;
    scanf("%d%d",&n,&q);
    UnionFindTree uf(n);
    while(q--){
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        if(c){
            printf("%d\n",uf.same(x,y));
        } else {
            uf.unite(x,y);
        }
    }
}