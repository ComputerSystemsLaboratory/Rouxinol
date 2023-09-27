#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

struct UnionFind{
    vector<int> par;

    UnionFind(int N) : par(N) {
        for (int i = 0; i < N; ++i) {
            par[i] = i;
        }
    }

    int root(int x){
        if(par[x] == x) {
            return x;
        }
        return par[x] = root(par[x]);
    }

    void unite(int x, int y){

        int rx = root(x);
        int ry = root(y);
        if(rx == ry){
            return;
        }
        par[rx] = ry;
    }

    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};
int main(){
    int n, m;
    cin >> n >> m;
    UnionFind g(n);
    int x, y;
    for (int i = 0; i < m; ++i) {
        cin  >> x >> y;
        g.unite(x, y);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> x >> y;
        if(g.same(x, y)){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
