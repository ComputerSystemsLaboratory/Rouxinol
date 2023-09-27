#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
    vector<int> data;
    UnionFind(int size) : data(size, -1){}
    void unite(int x, int y){
        x = root(x);
        y = root(y);
        if (x != y){
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
        }
    }
    int root(int x) {return data[x] < 0 ? x : data[x] = root(data[x]);}
    int size(int x) {return -data[root(x)];}
};


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    UnionFind uf(n);
    while (q--){
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0){
            uf.unite(x, y);
        }else{
            if (uf.root(x) == uf.root(y)){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}