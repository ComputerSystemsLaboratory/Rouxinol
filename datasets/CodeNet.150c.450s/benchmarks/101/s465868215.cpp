#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template <typename T>
void printv(const vector<T> &v){
    int sz = v.size();
    for (int i = 0; i < sz; i++){
        cout << v[i] << " \n"[i == sz - 1];
    }
}

struct UnionFind{
    vector<int> data;
    UnionFind(int size) : data(size, -1) {}
    bool unite(int x, int y){
        x = root(x);
        y = root(y);
        if (x != y){
            if (data[y] < data[x])
                swap(x, y);
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }
    bool find(int x, int y){
        return root(x) == root(y);
    }
    int root(int x){
        return data[x] < 0 ? x : data[x] = root(data[x]);
    }
    int size(int x){
        return -data[root(x)];
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;cin >> n >> m;
    UnionFind uf(n);
    for (int i = 0; i < m; i++){
        int s, t;
        cin >> s >> t;
        uf.unite(s, t);
    }
    int q;cin >> q;
    while (q--){
        int s, t;
        cin >> s >> t;
        cout << (uf.find(s, t) ? "yes" : "no") << endl;
    }
}
