#include <iostream>
#include <vector>

using namespace std;

class UnionFind {
    vector<int> data;
public:
    UnionFind(int n):data(n, -1){}
    int root(int x){
        return data[x] < 0? x: data[x] = root(data[x]);
    }
    bool unite(int x, int y){
        x = root(x); y = root(y);
        if(x == y)return false;
        if(data[y] < data[x])swap(x, y);
        data[x] += data[y];
        data[y] = x;
        return true;
    }
    bool same(int x, int y){
        return root(x) == root(y);
    }
};

int main(){
    int n, q;
    cin >> n >> q;
    UnionFind uf(n);
    while(q--){
        int com, x, y;
        cin >> com >> x >> y;
        if(com)cout << uf.same(x, y) << '\n'; else uf.unite(x, y);
    }
    return 0;
}