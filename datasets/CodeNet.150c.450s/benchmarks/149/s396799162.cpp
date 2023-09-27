#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
 
struct UnionFind {
    vector<int> data;
    UnionFind(int size) : data(size, -1) { }
    bool unionSet(int x, int y) {
        x = root(x); y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y]; data[y] = x;
        }
        return x != y;
    }
    bool findSet(int x, int y) {
        return root(x) == root(y);
    }
    int root(int x) {
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    int size(int x) {
        return -data[root(x)];
    }
};
 
 
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int n,q; cin >> n >> q; 
    UnionFind uf(n+1);
    for (int i = 0; i < q;i++) {
int com,x,y; cin >> com >> x >> y;
if(com == 0){
uf.unionSet(x,y);
}
if(com == 1){
if(uf.findSet(x,y)){
cout << 1 << endl;
}else{
cout << 0 << endl;
}
}
    }
 
}