#include <iostream>
#include <vector>

typedef struct UNION_FIND{
    std::vector<int> par;
    UNION_FIND(int size) : par(size){
        for(int i=0; i<size; ++i) par[i] = i;
    }
    int find(int x){
        return ( (x == par[x]) ? x : (par[x] = find(par[x])) );
    }
    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if( x == y ) return;

        par[y] = x;
    }
    bool same(int x, int y){
        return ( find(x) == find(y) );
    }
} UnionFind;

int n, q;
int c, x, y;

int main(void){
    std::cin >> n >> q;

    UnionFind uf(n);
    for(int i=0; i<q; ++i){
        std::cin >> c >> x >> y;
        if(c == 0){
            uf.unite(x,y);
        }else{
            if(uf.same(x,y)){
                std::cout << "1\n";
            }else{
                std::cout << "0\n";
            }
        }
    }
}